#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

void viewLogFile(const char* fileName) {
    FILE* file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;

        // Skip the header line
        if (lineCount == 1) {
            continue;
        }

        char* token;
        token = strtok(line, ",");

        printf("Entry No: %s\n", token);

        token = strtok(NULL, ",");
        printf("Sensor No: %s\n", token);

        token = strtok(NULL, ",");
        printf("Temperature: %s\n", token);

        token = strtok(NULL, ",");
        printf("Humidity: %s\n", token);

        token = strtok(NULL, ",");
        printf("Light: %s\n", token);

        token = strtok(NULL, ",");
        printf("Time: %s\n", token);
    }

    fclose(file);
}

int main() {
    const char* fileName = "data.csv";
    viewLogFile(fileName);

    return 0;
}
