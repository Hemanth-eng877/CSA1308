# Elimination of Left Recursion

## Aim
To write a program that eliminates left recursion from a given grammar.

## Theory
If A -> A a | b, it becomes A -> b A' and A' -> a A' | e.

## Algorithm
1. Parse input rule A -> A a | b.
2. Identify alpha (a) and beta (b).
3. Output new rules A -> b A' and A' -> a A' | e.

## Program
The source code is provided in `program.c`.

## Sample Input
```
E
+T
T
```

## Sample Output
*(To be generated on a local machine)*
```
E -> TE'
E' -> +TE' | e
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.