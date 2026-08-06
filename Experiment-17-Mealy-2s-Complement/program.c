#include <stdio.h>
#include <string.h>

int main() {
    char str[100], res[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    int state = 0; // 0 = no 1 seen, 1 = 1 seen
    int len = strlen(str);
    res[len] = '\0';
    
    for(int i = len - 1; i >= 0; i--) {
        if(state == 0) {
            res[i] = str[i];
            if(str[i] == '1') state = 1;
        } else {
            res[i] = (str[i] == '0') ? '1' : '0';
        }
    }
    
    printf("2's Complement (Mealy): %s\n", res);
    return 0;
}