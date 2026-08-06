#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter parentheses: ");
    scanf("%s", str);
    
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(') count++;
        else if (str[i] == ')') count--;
        if (count < 0) break;
    }
    
    if (count == 0) printf("Balanced (CFG matches)\n");
    else printf("Unbalanced\n");
    
    return 0;
}