#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string (a^n b^n): ");
    scanf("%s", str);
    
    int stack_count = 0, valid = 1, i = 0;
    
    // Push 'a's
    while(str[i] == 'a') {
        stack_count++;
        i++;
    }
    // Pop 'b's
    while(str[i] == 'b') {
        stack_count--;
        if (stack_count < 0) { valid = 0; break; }
        i++;
    }
    
    if (i == strlen(str) && stack_count == 0 && valid) {
        printf("Accepted by PDA\n");
    } else {
        printf("Rejected by PDA\n");
    }
    return 0;
}