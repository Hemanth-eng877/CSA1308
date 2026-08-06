#include <stdio.h>
#include <string.h>

int main() {
    printf("Left Factoring Simulation\n");
    char prefix[] = "iEtS";
    char beta1[] = "eS";
    char beta2[] = "e"; // epsilon
    
    printf("Original: S -> %s%s | %s\n", prefix, beta1, prefix);
    printf("Left Factored:\n");
    printf("S -> %s S'\n", prefix);
    printf("S' -> %s | e\n", beta1);
    
    return 0;
}