#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter unary addition (e.g. 111011 for 3+2): ");
    scanf("%s", tape);
    
    int len = strlen(tape);
    // Find separator
    for(int i = 0; i < len; i++) {
        if(tape[i] == '0') {
            tape[i] = '1';
            break;
        }
    }
    
    // Remove last 1
    tape[len-1] = '\0';
    
    printf("Halted. Final tape: %s\n", tape);
    return 0;
}