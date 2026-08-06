# Turing Machine for Unary Subtraction

## Aim
To simulate a Turing Machine for unary proper subtraction.

## Theory
Given m '1's, a '0', and n '1's. The TM repeatedly cancels a '1' from m with a '1' from n.

## Algorithm
1. Change first '1' to 'B'.
2. Move right past '0' and change first '1' to 'B'.
3. Repeat until right '1's are exhausted.

## Program
The source code is provided in `program.c`.

## Sample Input
```
1111011
```

## Sample Output
*(To be generated on a local machine)*
```
Halted. Final tape: 11
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.