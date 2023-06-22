#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

int compare(const void* a, const void* b) {
    const Student* studentA = (const Student*)a;
    const Student* studentB = (const Student*)b;

    if (studentA->marks < studentB->marks) {
        return 1;
    } else if (studentA->marks > studentB->marks) {
        return -1;
    } else {
        return 0;
    }
}
// functin to sort student by marks.
void sortStudentsByMarks(Student* students, int size) {
    qsort(students, size, sizeof(Student), compare);
}
//function to display the sudent details.
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
    //code to enter the student details.
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

    printf("\nStudent Details before sorting:\n");
    displayStudents(students, size);

    sortStudentsByMarks(students, size);

    printf("\nStudent Details after sorting by marks (descending order):\n");
    displayStudents(students, size);

    free(students);

    return 0;
}
