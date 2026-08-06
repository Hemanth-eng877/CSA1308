#include <stdio.h>
#include <string.h>

int main() {
    char noun[20], verb[20];
    printf("Enter a Noun: ");
    scanf("%s", noun);
    printf("Enter a Verb: ");
    scanf("%s", verb);
    
    if((strcmp(noun, "dogs") == 0 || strcmp(noun, "cats") == 0) &&
       (strcmp(verb, "bark") == 0 || strcmp(verb, "sleep") == 0)) {
        printf("Valid English Sentence (S -> NP VP)\n");
    } else {
        printf("Grammar Parsing Failed\n");
    }
    
    return 0;
}