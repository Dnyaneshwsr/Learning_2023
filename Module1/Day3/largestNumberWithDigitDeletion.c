#include <stdio.h>

// Function to find the largest number by deleting a single digit
int findLargestNumber(int num) {
    int largestNum = 0;
    int divisor = 1;

    // Iterate through each digit of the number
    while (divisor <= num) {
        // Create a temporary number by excluding one digit at a time
        int temp = (num / divisor / 10) * divisor + (num % divisor);
        
        // Check if the temporary number is larger than the current largest number
        if (temp > largestNum) {
            largestNum = temp;
        }
        
        // Increase the divisor to move on to the next digit
        divisor *= 10;
    }

    return largestNum;
}

int main() {
    int num;

    // Prompt the user to enter a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Check if the input number is a 4-digit number
    if (num >= 1000 && num <= 9999) {
        // Call the function to find the largest number after deleting a digit
        int largestNum = findLargestNumber(num);
        
        // Display the largest number
        printf("The largest number after deleting a digit: %d\n", largestNum);
    } else {
        printf("Invalid input. Please enter a 4-digit number.\n");
    }

    return 0;
}
