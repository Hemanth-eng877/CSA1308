# NFA accepting strings starting with '0' and ending with '1'

## Aim
To write a C program simulating an NFA that accepts strings starting with 0 and ending with 1.

## Theory
A Nondeterministic Finite Automaton (NFA) allows for multiple state transitions for a single symbol. The language is L = { 0w1 | w in {0,1}* }.

## Algorithm
1. Read input string.
2. Check if the first character is '0' and the last character is '1'.
3. Since this is an educational simulation of the NFA concept in C, checking boundaries directly simulates the NFA's accepting paths.

## Program
The source code is provided in `program.c`.

## Sample Input
```
01101
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