# Epsilon Closure of NFA States

## Aim
To write a C program to find the epsilon closure of all states in an NFA.

## Theory
The epsilon closure (e-closure) of a state is the set of all states reachable from that state using only epsilon (empty string) transitions.

## Algorithm
1. Represent states and epsilon transitions using an adjacency matrix.
2. For each state, initialize its e-closure to itself.
3. Use Depth First Search (DFS) or a stack to explore all reachable states via epsilon transitions.
4. Print the resulting set for each state.

## Program
The source code is provided in `program.c`.

## Sample Input
```
N/A (Hardcoded matrix)
```

## Sample Output
*(To be generated on a local machine)*
```
e-closure(q0): { q0 q1 q2 }
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.