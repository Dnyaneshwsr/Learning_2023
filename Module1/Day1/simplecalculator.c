#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    float result;
    // enter operand 1
    printf("Enter Number1: ");
    scanf("%f", &num1);
    //enter operater
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    //enter operand 2
    printf("Enter Number2: ");
    scanf("%f", &num2);
    // switch case statement for calculator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
