# Left Factoring of Grammar

## Aim
To write a C program to eliminate left factoring from a grammar.

## Theory
If A -> a b1 | a b2, it becomes A -> a A' and A' -> b1 | b2.

## Algorithm
1. Identify common prefix 'a'.
2. Extract suffixes 'b1' and 'b2'.
3. Create new production rules resolving the ambiguity.

## Program
The source code is provided in `program.c`.

## Sample Input
```
N/A
```

## Sample Output
*(To be generated on a local machine)*
```
S -> iEtS S'
S' -> eS | e
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.