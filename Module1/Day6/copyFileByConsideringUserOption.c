#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile, char option) {
    char ch;

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        switch (option) {
            case 'u':  // Convert to upper case
                ch = toupper(ch);
                break;
            case 'l':  // Convert to lower case
                ch = tolower(ch);
                break;
            case 's':  // Convert to sentence case
                if (ch == '\n' || ch == '\r') {
                    ch = fgetc(sourceFile);
                    if (ch != EOF)
                        ch = toupper(ch);
                    fputc('\n', destinationFile);
                }
                break;
            default:
                break;
        }
        fputc(ch, destinationFile);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    FILE *sourceFile, *destinationFile;
    char option = 'n';  // Default: No case handling

    // Check if an option is specified
    if (argc > 3) {
        option = argv[1][1];  // Extract the option from command-line argument
    }

    // Open the source file in read mode
    sourceFile = fopen(argv[argc - 2], "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(argv[argc - 1], "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the file with case handling (if applicable)
    copyFile(sourceFile, destinationFile, option);

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
