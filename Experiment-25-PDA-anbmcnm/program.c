#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string (a^n b^m c^n+m): ");
    scanf("%s", str);
    
    int stack = 0, i = 0;
    while(str[i] == 'a') { stack++; i++; }
    while(str[i] == 'b') { stack++; i++; }
    while(str[i] == 'c') { stack--; i++; }
    
    if(i == strlen(str) && stack == 0) printf("Accepted by PDA\n");
    else printf("Rejected\n");
    return 0;
}