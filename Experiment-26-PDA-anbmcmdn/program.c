#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string (a^n b^m c^m d^n): ");
    scanf("%s", str);
    
    int a=0, b=0, c=0, d=0, i=0;
    while(str[i] == 'a') { a++; i++; }
    while(str[i] == 'b') { b++; i++; }
    while(str[i] == 'c') { c++; i++; }
    while(str[i] == 'd') { d++; i++; }
    
    if(i == strlen(str) && a == d && b == c) printf("Accepted by PDA\n");
    else printf("Rejected\n");
    return 0;
}