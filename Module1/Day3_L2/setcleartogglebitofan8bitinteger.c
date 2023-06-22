#include <stdio.h>

unsigned char setBit(unsigned char num, int pos) {
    return num | (1 << pos);
}

unsigned char clearBit(unsigned char num, int pos) {
    return num & ~(1 << pos);
}

unsigned char toggleBit(unsigned char num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    unsigned char num = 0b01010101; // Example 8-bit number

    printf("Original number: 0x%X\n", num);

    num = setBit(num, 2);  // Set bit at position 2
    printf("After setting bit: 0x%X\n", num);

    num = clearBit(num, 5);  // Clear bit at position 5
    printf("After clearing bit: 0x%X\n", num);

    num = toggleBit(num, 3);  // Toggle bit at position 3
    printf("After toggling bit: 0x%X\n", num);

    return 0;
}
