#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string over {a,b}: ");
    scanf("%s", str);
    
    int state = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (state == 0) state = (c == 'a') ? 1 : 0;
        else if (state == 1) state = (c == 'b') ? 2 : 1;
        else if (state == 2) state = (c == 'a') ? 3 : 0;
        else if (state == 3) state = 3;
    }
    
    if (state == 3) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}