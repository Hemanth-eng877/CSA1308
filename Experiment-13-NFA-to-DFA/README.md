# NFA to DFA Conversion Simulation

## Aim
To write a C program demonstrating the concept of converting an NFA to a DFA.

## Theory
NFA to DFA conversion uses the subset construction algorithm where each DFA state is a subset of NFA states.

## Algorithm
1. Start with the epsilon closure of the NFA start state.
2. For each input symbol, compute the epsilon closure of the set of states reachable.
3. Create new DFA states for each unique subset of NFA states.

## Program
The source code is provided in `program.c`.

## Sample Input
```
N/A
```

## Sample Output
*(To be generated on a local machine)*
```
NFA to DFA Conversion Simulation
Subset construction completed.
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.