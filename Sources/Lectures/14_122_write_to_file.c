/* Files - writing to a file
 * 3 functions:
 * fputc()
 * putc()
 * fputs()
 * fprintf()
 */

#include <stdio.h>

int main() {

    /* fputc() - writes a single character to a text file
     * first arg: character
     * second arg: file pointer
     * returns int, or EOF if failure
     */

    FILE *fp;
    int ch;

    fp = fopen("Data/file.txt", "w+");
    for (ch = 33; ch<=100; ch++) {
        fputc(ch, fp);
    }
    fclose(fp);

    /* putc() similar to fputc(), but it can be implemented as a macro
     *
     */

    /* fputs()
     * first arg: output string pointer
     * second arg: output file pointer
     * returns int (EOF if failure)
     * expecting to write a line of text that has a newline char at the end
     */

    fp = NULL;
    fp = fopen("Data/file1.txt", "w");
    fputs("This is Jeremy Adams", fp);
    fputs("I am happy to be here", fp);

    /* fprint()
     * write formatted output (like printf) to a file
     */

    fp = NULL;
    fp = fopen("Data/file2.txt", "w");
    fprintf(fp, "%s %s %s %s %d\n", "Hello", "my", "number", "is", 555);
    fclose(fp);

    return(0);
}