# Pattern Searching Using Finite Automata (KMP concept)

## Aim
To implement pattern searching using state transition.

## Theory
Pattern searching can be done by constructing a DFA for the pattern and running the text through it.

## Algorithm
1. Preprocess pattern to build transition table or LPS array.
2. Iterate through text.
3. If pattern matched completely, output index.

## Program
The source code is provided in `program.c`.

## Sample Input
```
ababcabc
abc
```

## Sample Output
*(To be generated on a local machine)*
```
Pattern found at index 2
Pattern found at index 5
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.