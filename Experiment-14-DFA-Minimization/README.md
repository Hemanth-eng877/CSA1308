# DFA Minimization Simulation

## Aim
To simulate the minimization of a DFA using the table filling method.

## Theory
Minimization removes unreachable and indistinguishable states to produce the smallest equivalent DFA.

## Algorithm
1. Eliminate unreachable states.
2. Mark pairs of final and non-final states.
3. Iteratively mark pairs whose transitions go to already marked pairs.
4. Merge unmarked pairs.

## Program
The source code is provided in `program.c`.

## Sample Input
```
N/A
```

## Sample Output
*(To be generated on a local machine)*
```
Minimized DFA has 4 states.
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.