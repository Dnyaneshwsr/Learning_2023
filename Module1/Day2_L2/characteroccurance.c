#include <stdio.h>
// fuction to check the character occurance
char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    
    return NULL;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    // Remove newline character from the string
    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }

    char *result = xstrchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
