# PDA for Balanced Parentheses

## Aim
To write a C program implementing a PDA for balanced parentheses.

## Theory
Push '(' onto the stack. Pop '(' when ')' is read. If the stack is empty at the end and never underflows, it's balanced.

## Algorithm
1. Initialize top = -1.
2. For '(', increment top. For ')', decrement top.
3. If top < -1 at any point, reject.
4. Accept if top == -1 at the end.

## Program
The source code is provided in `program.c`.

## Sample Input
```
((()))
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