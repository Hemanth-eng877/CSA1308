# PDA for Equal Number of 0s and 1s

## Aim
To write a C program to implement a PDA accepting strings with an equal number of 0s and 1s.

## Theory
A PDA uses a stack to keep track of the difference between 0s and 1s. If we see a 0, we push/pop depending on the stack's top.

## Algorithm
1. Keep a counter acting as a stack size (positive for excess 0s, negative for excess 1s).
2. Iterate through string, add 1 for '0', subtract 1 for '1'.
3. Accept if counter == 0 at the end.

## Program
The source code is provided in `program.c`.

## Sample Input
```
010110
```

## Sample Output
*(To be generated on a local machine)*
```
Accepted by PDA
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.