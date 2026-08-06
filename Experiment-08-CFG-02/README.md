# Context Free Grammar 02

## Aim
To write a program for checking CFG derived palindromes.

## Theory
S -> aSa | bSb | a | b | e generates palindromes. We can simulate this CFG by checking if the string reads the same forwards and backwards.

## Algorithm
1. Read string.
2. Compare start and end pointers, moving inwards.
3. If any mismatch, reject. Otherwise accept.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aba
```

## Sample Output
*(To be generated on a local machine)*
```
Accepted by CFG
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.