#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter string: ");
    scanf("%s", tape);
    
    int l = 0, r = strlen(tape) - 1;
    while(l < r) {
        char temp = tape[l];
        tape[l] = tape[r];
        tape[r] = temp;
        l++; r--;
    }
    
    printf("Halted. Reversed tape: %s\n", tape);
    return 0;
}