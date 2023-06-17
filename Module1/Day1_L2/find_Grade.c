#include <stdio.h>

// Function to find the grade of a student
char findGrade(int marks) {
    // Determine the grade based on the marks using switch-case statements
    switch (marks) {
        case 90 ... 100:
            return 'A';
        case 75 ... 89:
            return 'B';
        case 60 ... 74:
            return 'C';
        case 50 ... 59:
            return 'D';
        case 36 ... 49:
            return 'E';
        case 0 ... 35:
            return 'F';
        default:
            return '\0'; // Return '\0' for invalid marks
    }
}

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Call the function to find the grade
    char grade = findGrade(marks);

    // Print the grade based on the return value
    switch (grade) {
        case 'A':
            printf("Grade A\n");
            break;
        case 'B':
            printf("Grade B\n");
            break;
        case 'C':
            printf("Grade C\n");
            break;
        case 'D':
            printf("Grade D\n");
            break;
        case 'E':
            printf("Grade E\n");
            break;
        case 'F':
            printf("Grade F\n");
            break;
        default:
            printf("Invalid marks\n");
            break;
    }

    return 0;
}
