#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    printf("Enter binary string: ");
    scanf("%s", tape);
    
    int z=0, o=0;
    for(int i=0; i<strlen(tape); i++){
        if(tape[i]=='0') { tape[i]='X'; z++; }
        if(tape[i]=='1') { tape[i]='Y'; o++; }
    }
    
    if(z == o) printf("Halted in Accept State.\n");
    else printf("Halted in Reject State.\n");
    
    return 0;
}