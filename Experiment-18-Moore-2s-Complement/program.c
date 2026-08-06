#include <stdio.h>
#include <string.h>

int main() {
    char str[100], res[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    int state = 0; // q0
    int len = strlen(str);
    res[len] = '\0';
    
    for(int i = len - 1; i >= 0; i--) {
        if(state == 0) {
            if(str[i] == '0') { state = 0; res[i] = '0'; }
            else { state = 1; res[i] = '1'; }
        } else {
            res[i] = (str[i] == '0') ? '1' : '0';
        }
    }
    
    printf("2's Complement (Moore): %s\n", res);
    return 0;
}