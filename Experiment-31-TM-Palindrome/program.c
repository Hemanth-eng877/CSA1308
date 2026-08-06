#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter string on TM tape: ");
    scanf("%s", tape);
    
    int left = 0;
    int right = strlen(tape) - 1;
    int is_pal = 1;
    
    // Simulating the TM head moving back and forth
    while(left < right) {
        if(tape[left] != tape[right]) {
            is_pal = 0;
            break;
        }
        tape[left] = 'B';
        tape[right] = 'B';
        left++; right--;
    }
    
    if(is_pal) printf("Halted in Accept State. It is a Palindrome.\n");
    else printf("Halted in Reject State.\n");
    
    return 0;
}