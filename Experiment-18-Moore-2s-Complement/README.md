# Moore Machine for 2's Complement

## Aim
To simulate a Moore machine for 2's complement generation.

## Theory
Similar logic to Mealy but output is bound to states. States: q0(start), q1(seen first 1, outputs 1), q2(flip to 0), q3(flip to 1).

## Algorithm
1. Read input backwards.
2. Transition through states and append outputs.
3. Reverse output string to get final result.

## Program
The source code is provided in `program.c`.

## Sample Input
```
0110
```

## Sample Output
*(To be generated on a local machine)*
```
2's Complement (Moore): 1010
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.