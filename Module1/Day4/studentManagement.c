#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    Student *students = (Student *)malloc(numStudents * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    printf("\nEnter student details:\n");
    //entering student details...
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &(students[i].age));

        printf("Marks: ");
        scanf("%f", &(students[i].marks));

        printf("\n");
    }

    printf("\nStudent Details:\n");
    //printing student details
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
