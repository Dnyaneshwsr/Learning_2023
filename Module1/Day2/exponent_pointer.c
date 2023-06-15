#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    
    // Printing exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llx\n", exponent);
    
    // Printing exponent in binary format
    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
