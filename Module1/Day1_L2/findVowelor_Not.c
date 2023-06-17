#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    // Convert the character to lowercase for case-insensitive comparison
    ch = tolower(ch);

    // Check if the character is a vowel using switch-case statements
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1; // Vowel
        default:
            return 0; // Not a vowel
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Call the function to check if the character is a vowel
    int isVowelResult = isVowel(ch);

    // Print the result based on the return value
    if (isVowelResult == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
