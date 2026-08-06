#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter binary string on TM tape: ");
    scanf("%s", tape);
    
    printf("TM processing...\n");
    for(int i = 0; i < strlen(tape); i++) {
        if(tape[i] == '0') tape[i] = '1';
        else if(tape[i] == '1') tape[i] = '0';
    }
    
    printf("Halted. Final tape: %s\n", tape);
    return 0;
}