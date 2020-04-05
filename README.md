# GreedyActivitySelector

Activity Selection problem is an approach of selecting non-conflicting tasks based on start and end time and can be solved in O(N logN) time using a simple greedy approach. 

## Problem Statement
"Given a set of n activities with their start and finish times, we need to select maximum number of non-conflicting activities that can be performed by a single person, given that the person can handle only one activity at a time." 

## Objective

Our objective is to complete maximum number of activities. So, choosing the activity which is going to finish first will leave us maximum time to adjust the later activities. This is the intuition that greedily choosing the activity with earliest finish time will give us an optimal solution. 

## Strategy used with description

Greedy is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: At every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.

## Applications:
- Scheduling events in a room having multiple competing events
- Scheduling and manufacturing multiple products having their time of production on the same machine
- Scheduling meetings in one room
- Several use cases in Operations Research
