#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;

    switch (oper_type) {
        case 1:
            result |= (1 << 0);   // Set 1st bit if operation type is 1
            break;
        case 2:
            result &= ~(1 << 31);  // Clear 31st bit if operation type is 2
            break;
        case 3:
            result ^= (1 << 15);  // Toggle 16th bit if operation type is 3
            break;
        default:
            printf("Error: Invalid operation type\n");  //invalid operation for invalid user oper_type
            break;
    }

    return result;
}

int main() {
    int num, oper_type;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}
