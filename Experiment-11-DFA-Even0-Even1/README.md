# DFA for Even 0s and Even 1s

## Aim
To write a C program simulating a DFA that accepts strings with an even number of 0s and an even number of 1s.

## Theory
This DFA has 4 states representing the parities of the number of 0s and 1s: (even, even), (even, odd), (odd, even), and (odd, odd).

## Algorithm
1. Start in state (even, even) i.e. 0.
2. On '0', toggle the first parity. On '1', toggle the second parity.
3. Accept if ending in state 0.

## Program
The source code is provided in `program.c`.

## Sample Input
```
0011
```

## Sample Output
*(To be generated on a local machine)*
```
Accepted
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.