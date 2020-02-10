/* write a program that will print the contents of a file in reverse order
 * use the fseek function to seek to the end of the file
 * use the ftell function to get the position of the file pointer
 * display as output the file in reverse order
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char *inputPath = "Data/assn21.txt";
    FILE *pInput;
    long pos;
    long offset = -1;

    pInput = fopen(inputPath, "r");
    if (pInput == NULL) {
        perror("Error opening file");
        return -1;
    }

    fseek(pInput, 0, SEEK_END);
    pos = ftell(pInput);
    pos *= -1;
   
    while(offset >= pos) {
        fseek(pInput, offset, SEEK_END);
        printf("%c", fgetc(pInput));
        offset--;
    }
    printf("\n");

    fclose(pInput);
    return 0;
}
