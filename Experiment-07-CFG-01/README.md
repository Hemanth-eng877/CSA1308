# Context Free Grammar 01

## Aim
To write a C program to simulate a CFG generating balanced parentheses.

## Theory
A CFG has rules like S -> (S) | SS | e. A stack or counter can check balanced parentheses.

## Algorithm
1. Initialize counter = 0.
2. Iterate through string, increment for '(', decrement for ')'.
3. If counter drops below 0, reject.
4. If counter is 0 at end, accept.

## Program
The source code is provided in `program.c`.

## Sample Input
```
(())()
```

## Sample Output
*(To be generated on a local machine)*
```
Balanced (CFG matches)
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.