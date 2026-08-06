#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    printf("1's Complement (Mealy): ");
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == '0') printf("1");
        else if(str[i] == '1') printf("0");
    }
    printf("\n");
    return 0;
}