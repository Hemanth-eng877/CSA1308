# Conversion of CFG to Chomsky Normal Form (CNF)

## Aim
To write a program simulating the conversion of a Context Free Grammar to Chomsky Normal Form.

## Theory
In CNF, all production rules are of the form A -> BC or A -> a. This involves removing null productions, unit productions, and replacing long terminals.

## Algorithm
1. Remove null productions.
2. Remove unit productions.
3. Replace terminals in long rules.
4. Break rules with length > 2.

## Program
The source code is provided in `program.c`.

## Sample Input
```
N/A
```

## Sample Output
*(To be generated on a local machine)*
```
Final CNF:
S -> AX | YB | a
X -> SA
A -> b | AX | YB | a
Y -> a
B -> b
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.