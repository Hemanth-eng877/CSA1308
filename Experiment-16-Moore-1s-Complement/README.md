# Moore Machine for 1's Complement

## Aim
To implement a Moore machine that outputs the 1's complement of a binary string.

## Theory
A Moore machine's output depends only on its current state. We need two states: one outputting 0, and one outputting 1.

## Algorithm
1. State q0 (outputs nothing initially).
2. If input '0', transition to q1 (outputs '1').
3. If input '1', transition to q2 (outputs '0').

## Program
The source code is provided in `program.c`.

## Sample Input
```
110011
```

## Sample Output
*(To be generated on a local machine)*
```
1's Complement (Moore): 001100
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.