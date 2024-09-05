#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file for reading
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        exit(1);
    }

    // Read and print the contents of the file
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
