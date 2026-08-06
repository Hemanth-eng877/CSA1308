#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter parentheses: ");
    scanf("%s", str);
    
    int top = -1;
    int valid = 1;
    
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == '(') top++;
        else if(str[i] == ')') {
            if(top == -1) { valid = 0; break; }
            top--;
        }
    }
    
    if(valid && top == -1) printf("Accepted by PDA\n");
    else printf("Rejected by PDA\n");
    return 0;
}