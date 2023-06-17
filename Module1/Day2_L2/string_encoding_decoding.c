#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//finction to encode the string 
void encode(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] += 5;  // Shift each character by 5 positions
    }
}

//function to decode the string in the original form
void decode(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] -= 5;  // Shift each character back by 5 positions
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Encode the string
    encode(str);
    printf("Encoded string: %s", str);

    // Decode the string
    decode(str);
    printf("Decoded string: %s", str);

    return 0;
}
