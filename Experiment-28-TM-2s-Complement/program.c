#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter binary string on TM tape: ");
    scanf("%s", tape);
    
    int state = 0; // 0 = find right end, 1 = skip 0s, 2 = flip
    int head = strlen(tape) - 1;
    
    while(head >= 0) {
        if(state == 0) {
            if(tape[head] == '0') { /* leave */ }
            else if(tape[head] == '1') { state = 1; }
        } else if(state == 1) {
            if(tape[head] == '0') tape[head] = '1';
            else if(tape[head] == '1') tape[head] = '0';
        }
        head--;
    }
    
    printf("Halted. Final tape (2's complement): %s\n", tape);
    return 0;
}