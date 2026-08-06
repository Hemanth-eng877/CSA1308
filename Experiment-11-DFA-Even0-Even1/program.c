#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    
    // States: 0(EE), 1(EO), 2(OE), 3(OO)
    int state = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (state == 0) state = (str[i] == '0') ? 2 : 1;
        else if (state == 1) state = (str[i] == '0') ? 3 : 0;
        else if (state == 2) state = (str[i] == '0') ? 0 : 3;
        else if (state == 3) state = (str[i] == '0') ? 1 : 2;
    }
    
    if (state == 0) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}