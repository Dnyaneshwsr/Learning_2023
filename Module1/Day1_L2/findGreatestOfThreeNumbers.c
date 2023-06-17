#include <stdio.h>

// Function to find the greatest between 3 numbers
int findGreatest(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;
    //taking input 1st number from user
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    //taking input 2nd number from user
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    //taking input 3rd number from user
    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    // Calling the function to find the greatest number
    int greatest = findGreatest(num1, num2, num3);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
