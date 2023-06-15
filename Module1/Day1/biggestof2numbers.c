#include <stdio.h>
 //declaring function for returning the biggest number between two numbers
int findMaxUsingIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
// declaring the function for finding the biggest number between two numbers
int findMaxUsingTernaryOperator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int max1 = findMaxUsingIfElse(num1, num2);
    int max2 = findMaxUsingTernaryOperator(num1, num2);

    printf("Using if-else: The maximum of %d and %d is %d\n", num1, num2, max1);
    printf("Using ternary operator: The maximum of %d and %d is %d\n", num1, num2, max2);

    return 0;
}
