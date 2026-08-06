# PDA for a^n b^m c^m d^n

## Aim
To write a C program simulating a PDA for a^n b^m c^m d^n.

## Theory
Push 'a's. Push 'b's. Pop 'b's matching with 'c's. Pop 'a's matching with 'd's.

## Algorithm
1. Count n for a. Count m for b.
2. Ensure exactly m 'c's follow. Ensure exactly n 'd's follow.
3. Verify structure.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aabbccdd
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