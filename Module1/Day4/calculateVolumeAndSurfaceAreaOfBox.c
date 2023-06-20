#include <stdio.h>

typedef struct {
    float length;
    float width;
    float height;
    float volume;
    float surfaceArea;
} Box;

void calculateVolumeAndSurfaceArea(Box *box);

int main() {
    Box myBox;
    Box *boxPtr = &myBox;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(boxPtr->length));
    printf("Width: ");
    scanf("%f", &(boxPtr->width));
    printf("Height: ");
    scanf("%f", &(boxPtr->height));

    calculateVolumeAndSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", myBox.volume);
    printf("Total Surface Area of the box: %.2f\n", myBox.surfaceArea);

    return 0;
}
//function to calculate the volume and surface of the box..
void calculateVolumeAndSurfaceArea(Box *box) {
    box->volume = box->length * box->width * box->height;
    box->surfaceArea = 2 * (box->length * box->width + box->width * box->height + box->height * box->length);
}
