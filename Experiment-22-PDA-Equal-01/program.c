#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == '0') count++;
        else if(str[i] == '1') count--;
    }
    
    if(count == 0) printf("Accepted by PDA\n");
    else printf("Rejected by PDA\n");
    return 0;
}