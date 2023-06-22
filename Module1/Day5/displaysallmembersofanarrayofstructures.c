#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void displayStudents(const Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    Student* students = (Student*)malloc(size * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    displayStudents(students, size);

    free(students);

    return 0;
}
