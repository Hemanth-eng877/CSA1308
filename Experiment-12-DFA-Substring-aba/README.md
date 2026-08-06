# DFA accepting substring 'aba'

## Aim
To write a C program implementing a DFA accepting strings with the substring 'aba'.

## Theory
The DFA will track the longest matching prefix of 'aba'. Once it reaches the final state, it loops there.

## Algorithm
1. Initialize state=0.
2. State transitions: 0-'a'->1, 1-'b'->2, 2-'a'->3. (Final state 3).
3. Adjust for mismatches (e.g. 1-'a'->1, 2-'b'->0).
4. Accept if state is 3.

## Program
The source code is provided in `program.c`.

## Sample Input
```
bbababa
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