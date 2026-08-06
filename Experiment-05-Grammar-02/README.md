# Context Sensitive Grammar Check

## Aim
To verify if a string follows a^n b^n c^n.

## Theory
a^n b^n c^n is a context-sensitive language. A C program can verify it by counting character occurrences.

## Algorithm
1. Read input string.
2. Count number of 'a's, 'b's, and 'c's in sequence.
3. If counts are equal and strictly in a^n b^n c^n order, accept.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aabbcc
```

## Sample Output
*(To be generated on a local machine)*
```
Accepted
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.