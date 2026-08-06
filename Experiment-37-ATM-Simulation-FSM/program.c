#include <stdio.h>

int main() {
    int state = 0; // 0: Idle, 1: Pin, 2: Withdraw, 3: Eject
    
    while(state != 3) {
        if(state == 0) {
            printf("Card Inserted. Moving to PIN State.\n");
            state = 1;
        } else if(state == 1) {
            printf("Enter PIN: ");
            int pin; scanf("%d", &pin);
            if(pin == 1234) state = 2;
            else { printf("Wrong PIN. Ejecting.\n"); state = 3; }
        } else if(state == 2) {
            printf("Enter amount: ");
            int amt; scanf("%d", &amt);
            printf("Dispensing %d. Transaction Complete.\n", amt);
            state = 3;
        }
    }
    
    printf("Card Ejected. Back to Idle.\n");
    return 0;
}