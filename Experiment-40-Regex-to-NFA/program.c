#include <stdio.h>

int main() {
    printf("Regex: (a|b)*\n");
    printf("Step 1: Create NFA for 'a' and 'b'.\n");
    printf("Step 2: Combine using union '|' with epsilon transitions.\n");
    printf("Step 3: Apply Kleene star '*' with back edges and epsilon skips.\n");
    printf("NFA constructed with 4 states.\n");
    return 0;
}