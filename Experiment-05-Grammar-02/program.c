#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string (a^n b^n c^n): ");
    scanf("%s", str);
    
    int a=0, b=0, c=0, i=0;
    while(str[i]=='a') { a++; i++; }
    while(str[i]=='b') { b++; i++; }
    while(str[i]=='c') { c++; i++; }
    
    if (i == strlen(str) && a == b && b == c && a > 0)
        printf("Accepted\n");
    else
        printf("Rejected\n");
        
    return 0;
}