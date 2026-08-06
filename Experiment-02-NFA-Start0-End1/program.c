#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a binary string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    
    if (len >= 2 && str[0] == '0' && str[len-1] == '1') {
        printf("String Accepted\n");
    } else {
        printf("String Rejected\n");
    }
    
    return 0;
}