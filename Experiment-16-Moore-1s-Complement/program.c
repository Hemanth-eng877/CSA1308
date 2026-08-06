#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    printf("1's Complement (Moore): ");
    for(int i=0; i<strlen(str); i++) {
        int state = (str[i] == '0') ? 1 : 2;
        if(state == 1) printf("1");
        else printf("0");
    }
    printf("\n");
    return 0;
}