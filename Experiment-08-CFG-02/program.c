#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string for palindrome CFG: ");
    scanf("%s", str);
    
    int left = 0;
    int right = strlen(str) - 1;
    int is_pal = 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            is_pal = 0; break;
        }
        left++; right--;
    }
    
    if (is_pal) printf("Accepted by CFG\n");
    else printf("Rejected by CFG\n");
    
    return 0;
}