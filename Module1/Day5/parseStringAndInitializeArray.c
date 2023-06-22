#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void parseString(const char* input, Student* students, int size) {
    char* token;
    char* remainder;

    token = strtok((char*)input, " ");
    int i = 0;

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name));
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Read the newline character after scanf

    Student* students = (Student*)malloc(size * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the student details:\n");
    for (int i = 0; i < size; i++) {
        char input[50];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        parseString(input, &students[i], 1);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);

    return 0;
}
