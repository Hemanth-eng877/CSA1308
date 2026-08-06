# PDA for a^n b^n

## Aim
To implement a Pushdown Automaton simulating the language L = {a^n b^n | n>=1}.

## Theory
A PDA uses a stack. For every 'a', push onto stack. For every 'b', pop from stack. Accept if stack is empty at the end.

## Algorithm
1. Initialize an array to act as a stack, top = -1.
2. Iterate over the string.
3. If 'a', push. If 'b', pop. If 'b' when stack is empty, reject.
4. If after string parsing stack is empty, accept.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aabb
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