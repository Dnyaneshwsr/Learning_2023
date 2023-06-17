#include <stdio.h>
#include <string.h>
//function for name sorting
void sortNames(char *names[], int size) {
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);
    //for loop to print the original names
    printf("Original Names: ");
    for (int i = 0; i < size; i++) {
        printf("%s, ", names[i]);
    }

    sortNames(names, size);
    //for loop to print the sorted names
    printf("\nSorted Names: ");
    for (int i = 0; i < size; i++) {
        printf("%s, ", names[i]);
    }

    return 0;
}
