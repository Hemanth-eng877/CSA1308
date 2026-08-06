#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    
    // Simulate DFA checking for substring acceptance
    if (strstr(str, "bac") != NULL) {
        printf("Accepted (contains bac)\n");
    } else if (strstr(str, "ac") != NULL) {
        printf("Accepted (contains ac)\n");
    } else if (strchr(str, 'a') != NULL) {
        printf("Accepted (contains a)\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}