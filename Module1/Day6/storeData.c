#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

int extractLogEntries(const char* fileName, struct LogEntry* entries) {
    FILE* file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    char line[MAX_LINE_LENGTH];
    int lineCount = 0;
    int entryCount = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;

        // Skip the header line
        if (lineCount == 1) {
            continue;
        }

        char* token;
        token = strtok(line, ",");

        // Extract and store values in the structure
        entries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        entries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].time, token);

        entryCount++;
    }

    fclose(file);
    return entryCount;
}

int main() {
    const char* fileName = "data.csv";
    struct LogEntry entries[MAX_ENTRIES];

    int numEntries = extractLogEntries(fileName, entries);

    // Display the extracted entries
    for (int i = 0; i < numEntries; i++) {
        printf("Entry No: %d\n", entries[i].entryNo);
        printf("Sensor No: %s\n", entries[i].sensorNo);
        printf("Temperature: %.2f\n", entries[i].temperature);
        printf("Humidity: %d\n", entries[i].humidity);
        printf("Light: %d\n", entries[i].light);
        printf("Time: %s\n", entries[i].time);
        printf("--------------------\n");
    }

    return 0;
}
