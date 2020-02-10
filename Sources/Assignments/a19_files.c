/* Write a program to find the total number of lines in a text file
 * create a file that contains some lines of text
 * open your test file
 * use the fgetc function to parse characters in a file until you get to the EOF
 *  if EOF increment counter
 * display as output the total number of lines in the file
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *pFile;
    char *filePath = "Data/assn19.txt";
    int ch;
    int count = 0;


    pFile = fopen(filePath, "r");
    if (pFile == NULL) {
        printf("Error: could not open file\n");
        return -1;
    }

    ch = fgetc(pFile);
    while (ch != EOF) {
        if (ch == '\n') {
            count++;
        }
        ch = fgetc(pFile);
    }

    printf("Number of newline characters found: %d\n", count);
    printf("Number of lines in file: %d\n", count+1);

    fclose(pFile);
    return 0;
}