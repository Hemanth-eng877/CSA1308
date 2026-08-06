#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[50];
    printf("Enter a token: ");
    scanf("%s", word);
    
    if(strcmp(word, "int")==0 || strcmp(word, "if")==0 || strcmp(word, "return")==0) {
        printf("Token: KEYWORD\n");
    } else if (isalpha(word[0])) {
        printf("Token: IDENTIFIER\n");
    } else if (isdigit(word[0])) {
        printf("Token: CONSTANT\n");
    } else {
        printf("Token: UNKNOWN\n");
    }
    
    return 0;
}