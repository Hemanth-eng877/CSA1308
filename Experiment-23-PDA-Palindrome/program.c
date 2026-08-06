#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    
    int l = 0;
    int r = strlen(str) - 1;
    int valid = 1;
    
    while(l < r) {
        if(str[l] != str[r]) { valid = 0; break; }
        l++; r--;
    }
    
    if(valid) printf("Accepted by PDA (Palindrome)\n");
    else printf("Rejected\n");
    return 0;
}