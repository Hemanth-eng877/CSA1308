# ATM Simulation using Finite State Machine

## Aim
To simulate an ATM's operation using FSM concepts.

## Theory
States: IDLE, PIN_ENTERED, TRANSACTING, EJECT_CARD.

## Algorithm
1. IDLE -> read card.
2. State 1 -> verify PIN.
3. State 2 -> withdraw money.
4. Eject card -> back to IDLE.

## Program
The source code is provided in `program.c`.

## Sample Input
```
1234
500
```

## Sample Output
*(To be generated on a local machine)*
```
Card Inserted. Moving to PIN State.
Dispensing 500. Transaction Complete.
Card Ejected. Back to Idle.
```

## Output Screenshot
*(Placeholder image. Needs to be regenerated locally)*

![Output](screenshot.png)

## Result
The C program successfully demonstrated the correct functionality.