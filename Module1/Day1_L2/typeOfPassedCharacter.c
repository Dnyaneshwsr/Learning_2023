#include <stdio.h>
#include <ctype.h>

int findCharacterType(char ch) {
    if (isupper(ch)) {
        return 1; // for Uppercase letter
    } else if (islower(ch)) {
        return 2; // for Lowercase letter
    } else if (isdigit(ch)) {
        return 3; // for Digit
    } else if (isprint(ch)) {
        return 4; // for Printable symbol
    } else {
        return 5; // for Non-printable symbol
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int type = findCharacterType(ch);

    switch (type) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}
