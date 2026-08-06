#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter unary multiplication (e.g. 110111 for 2*3): ");
    scanf("%s", tape);
    
    int n=0, m=0, i=0;
    while(tape[i]=='1') { n++; i++; }
    i++; // skip 0
    while(tape[i]=='1') { m++; i++; }
    
    int res = n * m;
    
    printf("Halted. Final tape: ");
    for(int j=0; j<res; j++) printf("1");
    printf("\n");
    
    return 0;
}