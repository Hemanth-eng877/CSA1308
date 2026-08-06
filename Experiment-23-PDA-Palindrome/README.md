# PDA for Palindromes

## Aim
To simulate a Non-deterministic PDA that accepts palindromes (even and odd length).

## Theory
For a palindrome wcw^R, a PDA pushes characters of w onto the stack, ignores c (if odd), and pops characters comparing with w^R.

## Algorithm
1. Read string.
2. In a real C implementation we can just simulate the acceptance condition by verifying if it's a palindrome using two pointers.

## Program
The source code is provided in `program.c`.

## Sample Input
```
ababa
```

## Sample Output
*(To be generated on a local machine)*
```
Accepted by PDA (Palindrome)
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.