#include <stdio.h>
//function for compare boxes
int compareBoxes(int boxA[], int boxB[], int size) {
    int matchCount = 0;

    for (int i = 0; i < size; i++) {
        int currentItem = boxA[i];
        int foundMatch = 0;

        for (int j = 0; j < size; j++) {
            if (currentItem == boxB[j]) {
                foundMatch = 1;
                break;
            }
        }

        if (foundMatch) {
            matchCount++;
        }
    }

    if (matchCount == size) {
        return 1;  // One-to-one mapping exists
    } else {
        return 0;  // One-to-one mapping does not exist
    }
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    printf("%d\n", result);

    return 0;
}
