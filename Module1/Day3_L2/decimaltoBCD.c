#include <stdio.h>

unsigned char decimalToBCD(unsigned char decimal) {
    unsigned char tens = decimal / 10;
    unsigned char ones = decimal % 10;
    return (tens << 4) | ones;
}

int main() {
    unsigned char decimal;

    printf("Enter a decimal number (0-99): ");
    scanf("%hhu", &decimal);

    unsigned char bcd = decimalToBCD(decimal);

    printf("Decimal: %d\n", decimal);
    printf("BCD: 0x%X\n", bcd);

    return 0;
}
