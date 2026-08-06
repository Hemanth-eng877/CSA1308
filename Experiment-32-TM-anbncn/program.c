#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter string on tape (a^n b^n c^n): ");
    scanf("%s", tape);
    
    int a=0, b=0, c=0, i=0;
    while(tape[i]=='a') { a++; tape[i]='X'; i++; }
    while(tape[i]=='b') { b++; tape[i]='Y'; i++; }
    while(tape[i]=='c') { c++; tape[i]='Z'; i++; }
    
    if(i == strlen(tape) && a == b && b == c && a > 0)
        printf("Halted in Accept State.\n");
    else
        printf("Halted in Reject State.\n");
        
    return 0;
}