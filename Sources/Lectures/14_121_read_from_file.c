/* Files - Read from a file
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* fgetc() reads a character from a text file
     * takes file pointer
     * returns int (if it's EOF, then don't read anymore)
     * 
     * getc() is similar to fgetc(), only difference is that getc() can be 
     * implemented as a macro
     * 
     * rewind() can rewind the file back to its beginning
     */

    FILE *fp;
    int c;

    fp = fopen("Data/data1.txt", "r");
    if (fp == NULL) {
        perror("Error in opening file");
        return(-1);
    }

    // read a single char
    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    /* fgets() lets you read an entire string up to and including new line
     * first arg: output string pointer
     * second arg: int number of chars
     * third arg: FILE pointer for input stream
     * returns char
     */

    fp = NULL;
    char str[60];
    fp = fopen("Data/data1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    if (fgets(str, 60, fp) !=NULL) {
        printf("%s", str);
    }
    fclose(fp);

    /* fscanf() lets you scan a file for a specific pattern (like scanf)
     * first arg: pointer to input FILE stream
     * second arg: format specifier string
     * returns the number of matches
     *
     */

    return(0);
}