#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;
// function for searching student by name.
int searchStudentByName(const Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Found the student at index i
        }
    }
    return -1; // Student not found
}
// function to display the student details.
void displayStudent(const Student* student) {
    printf("Roll No: %d, Name: %s, Marks: %.2f\n", student->rollno, student->name, student->marks);
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);//taking input from user for number of students.

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
    //code to search the student by name.
    char searchName[20];
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    int foundIndex = searchStudentByName(students, size, searchName);
    if (foundIndex != -1) {
        printf("\nStudent found at index %d:\n", foundIndex);
        displayStudent(&students[foundIndex]);
    } else {
        printf("\nStudent not found.\n");
    }

    free(students);

    return 0;
}
