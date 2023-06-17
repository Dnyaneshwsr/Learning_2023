#include <stdio.h>

// Function to find the smallest and largest digits in a given set of numbers
void findSmallestAndLargestDigits(int n, int numbers[]) {
    // Initialize smallest and largest digits with the first number's rightmost digit
    int smallestDigit = numbers[0] % 10;
    int largestDigit = numbers[0] % 10;

    // Iterate through the numbers and update smallest and largest digits if necessary
    for (int i = 0; i < n; i++) {
        int currentNumber = numbers[i];

        // Iterate through the digits of the current number
        while (currentNumber > 0) {
            int digit = currentNumber % 10;

            // Update smallest and largest digits if necessary
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }

            // Move to the next digit by dividing the current number by 10
            currentNumber /= 10;
        }
    }

    // Check if the input numbers are valid (positive and non-zero)
    for (int i = 0; i < n; i++) {
        if (numbers[i] <= 0) {
            printf("Not Valid\n");
            return;
        }
    }

    // Print the smallest and largest digits
    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n;

    // Prompt the user to enter the number of values (n)
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    // Prompt the user to enter the numbers
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function to find the smallest and largest digits
    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
