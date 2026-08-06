#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;
    
    printf("Enter a string (a, b): ");
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (state == 0 && c == 'a') state = 1;
        else if (state == 0 && c == 'b') state = 3;
        else if (state == 1 && c == 'a') state = 1;
        else if (state == 1 && c == 'b') state = 2;
        else if (state == 2 && c == 'a') state = 1;
        else if (state == 2 && c == 'b') state = 2;
        else if (state == 3) state = 3; // dead state
    }
    
    if (state == 1)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");
        
    return 0;
}