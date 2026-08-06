#include <stdio.h>

int main() {
    int state = 0;
    int price = 15;
    int coin;
    
    printf("Vending Machine (Item Price: 15)\n");
    while(state < price) {
        printf("Current State (Amount): %d\n", state);
        printf("Insert coin (5 or 10): ");
        scanf("%d", &coin);
        if(coin == 5 || coin == 10) state += coin;
        else printf("Invalid coin!\n");
    }
    
    printf("Item Dispensed!\n");
    if(state > price) printf("Change returned: %d\n", state - price);
    
    return 0;
}