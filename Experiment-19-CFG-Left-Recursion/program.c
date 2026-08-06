#include <stdio.h>
#include <string.h>

int main() {
    char non_terminal;
    char alpha[10], beta[10];
    
    printf("Enter Non-Terminal: ");
    scanf(" %c", &non_terminal);
    printf("Enter Alpha: ");
    scanf("%s", alpha);
    printf("Enter Beta: ");
    scanf("%s", beta);
    
    printf("Grammar without left recursion:\n");
    printf("%c -> %s%c'\n", non_terminal, beta, non_terminal);
    printf("%c' -> %s%c' | e\n", non_terminal, alpha, non_terminal);
    
    return 0;
}