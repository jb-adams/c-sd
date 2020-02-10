/*
 * write a program that converts all characters of a file to uppercase and 
 * write the results out to a temporary file. Then rename the temporary file 
 * to the original filename and remove the temporary filename
 * 
 * use fgetc and fputc
 * use rename and remove functions
 * use the islower function 
 *  can convert a character to upper case by subtracting 32 from it
 * 
 * display the contents of the original file to standard output
 *  in uppercase
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *inputPath = "Data/assn20.input.txt";
    char *tempPath = "Data/assn20.temp.txt";
    char *outputPath = "Data/assn20.output.txt";
    FILE *pInput;
    FILE *pTemp;
    FILE *pOutput;
    char ch;

    pInput = fopen(inputPath, "r");
    pTemp = fopen(tempPath, "w");
    if (pInput == NULL || pTemp == NULL) {
        printf("Error: could not open file(s)");
        return -1;
    }

    while((ch=fgetc(pInput)) != EOF) {
        int isLower = islower(ch);
        char outChar = isLower ? ch - 32 : ch;
        fputc(outChar, pTemp);
    }

    fclose(pInput);
    fclose(pTemp);

    rename(tempPath, outputPath);
    remove(tempPath);

    pOutput = fopen(outputPath, "r");
    char *output;
    fgets(output, 200, pOutput);
    printf("%s", output);

    return 0;
}