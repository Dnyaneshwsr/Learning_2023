#include <stdio.h>
/*declaring function printGrade that takes a score as input and uses an if-else if block
 to determine and print the corresponding grade based on the score range.*/ 
void printGrade(int score) {
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    } else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    } else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    } else if (score >= 0 && score <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }
}

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    // calling a function by call by value
    printGrade(score);

    return 0;
}
