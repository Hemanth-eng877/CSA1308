#include <stdio.h>

int main() {
    printf("CFG to CNF Conversion Simulation\n");
    printf("Original: S -> ASA | aB, A -> B | S, B -> b | e\n");
    printf("After removing null (e):\nS -> ASA | aB | a, A -> B | S\nB -> b\n");
    printf("After removing unit (A->B, A->S):\nS -> ASA | aB | a\nA -> b | ASA | aB | a\nB -> b\n");
    printf("Final CNF:\nS -> AX | YB | a\nX -> SA\nA -> b | AX | YB | a\nY -> a\nB -> b\n");
    return 0;
}