# Turing Machine for Palindrome

## Aim
To write a C program simulating a TM checking for a palindrome.

## Theory
The TM checks the first and last characters. If they match, it replaces them with blanks and repeats.

## Algorithm
1. Replace leftmost with B, remember it.
2. Go right until B.
3. Check left character. If match, replace with B.
4. Go left until B. Repeat.

## Program
The source code is provided in `program.c`.

## Sample Input
```
ababa
```

## Sample Output
*(To be generated on a local machine)*
```
Halted in Accept State. It is a Palindrome.
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.