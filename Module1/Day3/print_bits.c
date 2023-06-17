#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    int totalBits = sizeof(num) * 8; // Total number of bits in an unsigned int

    // Iterate through each bit position from left to right
    for (i = totalBits - 1; i >= 0; i--) {
        unsigned int mask = 1 << i; // Create a bitmask with 1 at the current bit position

        // Check if the bit is set or not using bitwise AND operation
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Add space after every 8 bits for better readability
        if (i % 8 == 0) {
            printf(" ");
        }
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}
