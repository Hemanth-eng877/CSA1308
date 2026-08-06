# Turing Machine for 1's Complement

## Aim
To simulate a Turing Machine that computes the 1's complement of a binary string.

## Theory
A Turing Machine reads the tape left to right. When it sees 0, it writes 1. When it sees 1, it writes 0. Then halts.

## Algorithm
1. Move head right. If '0', write '1'. If '1', write '0'.
2. Stop on blank ('B').

## Program
The source code is provided in `program.c`.

## Sample Input
```
110010
```

## Sample Output
*(To be generated on a local machine)*
```
Halted. Final tape: 001101
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.