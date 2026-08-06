#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter unary subtraction (e.g. 111011 for 3-2): ");
    scanf("%s", tape);
    
    // simplified simulation
    int m = 0, n = 0, i = 0;
    while(tape[i] == '1') { m++; i++; }
    i++; // skip 0
    while(tape[i] == '1') { n++; i++; }
    
    int res = m - n;
    if(res < 0) res = 0; // proper subtraction
    
    printf("Halted. Final tape: ");
    for(int j=0; j<res; j++) printf("1");
    printf("\n");
    
    return 0;
}