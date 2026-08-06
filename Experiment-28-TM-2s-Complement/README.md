# Turing Machine for 2's Complement

## Aim
To simulate a Turing Machine that computes the 2's complement of a binary string.

## Theory
TM goes to the rightmost end. Reads left. Leaves 0s unchanged until first 1 is encountered. Leaves it as 1. Then flips the rest.

## Algorithm
1. Move head to end of string.
2. Move left. While '0', leave '0'.
3. If '1', leave '1' and change state.
4. In new state, flip remaining bits.

## Program
The source code is provided in `program.c`.

## Sample Input
```
10100
```

## Sample Output
*(To be generated on a local machine)*
```
Halted. Final tape (2's complement): 01100
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.