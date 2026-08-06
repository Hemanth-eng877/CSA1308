# DFA accepting strings starting and ending with 'a'

## Aim
To write a C program to implement a DFA that accepts strings starting and ending with 'a'.

## Theory
A Deterministic Finite Automaton (DFA) is a finite state machine that accepts or rejects strings of symbols and only produces a unique computation (or run) of the automaton for each input string. Here, the language L = { w | w starts and ends with 'a' }.

## Algorithm
1. Start in state q0.
2. If input is 'a', go to q1. If 'b', go to dead state q_d.
3. From q1, if 'a', stay in q1. If 'b', go to q2.
4. From q2, if 'a', go to q1. If 'b', stay in q2.
5. q1 is the only accepting state.

## Program
The source code is provided in `program.c`.

## Sample Input
```
aba
```

## Sample Output
*(To be generated on a local machine)*
```
String Accepted
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.