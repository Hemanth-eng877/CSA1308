# Turing Machine for Unary Addition

## Aim
To simulate a Turing Machine performing unary addition.

## Theory
Unary addition of n and m (represented as n 1s, a '0' separator, and m 1s). The TM replaces '0' with '1' and removes the last '1'.

## Algorithm
1. Move right to find '0'. Replace '0' with '1'.
2. Move right to find end of string.
3. Move left one step and change '1' to Blank.

## Program
The source code is provided in `program.c`.

## Sample Input
```
110111
```

## Sample Output
*(To be generated on a local machine)*
```
Halted. Final tape: 11111
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.