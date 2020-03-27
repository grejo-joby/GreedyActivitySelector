#include <stdio.h>

typedef struct activity
{
    int start, finish;
} activity;
//Function part used to sort activities based on finish time
// int compareActivity(activity s1, activity s2)
// {
//     return (s1.finish < s2.finish) ? 1 : 0;
// }

void activitySelector(activity arr[], int n)
{
    
    printf("Following activities are selected: \n");
    int i = 0;
    printf("(%d,%d), ", arr[i].start, arr[i].finish);
    int j = 0;
    for (j = 0; j < n; j++)
    {
        // If this activity has start time greater than or
        // equal to the finish time of previously selected
        // activity, then select it
        if (arr[j].start >= arr[i].finish)
        {
            printf("(%d,%d), ", arr[j].start, arr[j].finish);
            i = j;
        }
    }
}

void main()
{
    int n = 0;
    printf("Enter number of activities: ");
    scanf("%d", &n);
    activity arr[n];
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        printf("Activity %d: \n", i + 1);
        printf("Enter Start Time: ");
        scanf("%d", &arr[i].start);
        printf("Enter Finish Time: ");
        scanf("%d", &arr[i].finish);
    }
    //Sort activities based on finish time
    activity temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
        {
            if (arr[j].finish > arr[j + 1].finish)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    activitySelector(arr, n);
}