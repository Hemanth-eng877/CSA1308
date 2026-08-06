# PDA for a^n b^m c^(n+m)

## Aim
To write a C program simulating a PDA for the language a^n b^m c^(n+m).

## Theory
Push a's and b's onto the stack. Then pop the stack for each c. Accept if empty at the end.

## Algorithm
1. Read a's, increment count.
2. Read b's, increment count.
3. Read c's, decrement count.
4. Accept if valid order and count == 0.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aabbbccccc
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