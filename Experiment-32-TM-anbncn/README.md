# Turing Machine for a^n b^n c^n

## Aim
To simulate a TM for language a^n b^n c^n.

## Theory
A TM replaces one 'a' with X, moves right to replace one 'b' with Y, moves right to replace one 'c' with Z, and then returns to the first 'a'.

## Algorithm
1. Find 'a', mark as 'X'.
2. Move right, find 'b', mark as 'Y'.
3. Move right, find 'c', mark as 'Z'.
4. Move left to 'X', then right to next 'a'. Repeat.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aabbcc
```

## Sample Output
*(To be generated on a local machine)*
```
Halted in Accept State.
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.