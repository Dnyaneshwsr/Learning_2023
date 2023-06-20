#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapPoints(Point *p1, Point *p2);

int main() {
    Point point1, point2;

    // Input the values for point1
    printf("Enter the x-coordinate for point1: ");
    scanf("%d", &(point1.x));
    printf("Enter the y-coordinate for point1: ");
    scanf("%d", &(point1.y));

    // Input the values for point2
    printf("\nEnter the x-coordinate for point2: ");
    scanf("%d", &(point2.x));
    printf("Enter the y-coordinate for point2: ");
    scanf("%d", &(point2.y));

    printf("\nBefore swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the two structures
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
// swap point function
void swapPoints(Point *p1, Point *p2) {
    Point temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
