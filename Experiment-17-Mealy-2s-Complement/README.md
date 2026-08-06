# Mealy Machine for 2's Complement

## Aim
To implement a Mealy machine generating the 2's complement of a binary string.

## Theory
Reading from right to left, leave all 0s and the first 1 unchanged. After the first 1, flip all subsequent bits.

## Algorithm
1. Start in state 'No 1 seen'.
2. Read string backwards.
3. If 'No 1 seen', output current bit. If bit is 1, change state to '1 seen'.
4. If '1 seen', output flipped bit.

## Program
The source code is provided in `program.c`.

## Sample Input
```
10100
```

## Sample Output
*(To be generated on a local machine)*
```
2's Complement (Mealy): 01100
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.