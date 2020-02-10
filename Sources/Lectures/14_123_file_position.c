/* Files - find your position in a file
 * access data in a file other than sequential order, not just byte by byte
 * there are 2 aspects of file positioning
 * 1. finding out where you are in a file - ftell(), fgetpos()
 * 2. moving to a given point in a file
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* ftell()
     * long ftell(FILE *pfile)
     * first arg: file pointer
     * returns: long number for byte position (offset in bytes from beginning)
     */

    FILE *fp;
    int len;

    fp = fopen("Data/data1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }
    fseek(fp, 0, SEEK_END);
    len = ftell(fp);
    fclose(fp);
    printf("Total size of Data/data1.txt = %d bytes\n", len);

    /* fgetpos()
     * int fgetpos(FILE *pfile, fpos_t *position)
     * first arg: file pointer
     * second arg: pointer to a type defined in stdio.h
     * fgetpos() used in conjunction with fsetpos()
     */

    fp = NULL;
    fpos_t position;

    fp = fopen("Data/data2.txt", "w+");
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);
    fclose(fp);

    /* fseek()
     * is the complement to ftell()
     * int fseek(FILE *pfile, long offset, int origin)
     * first arg: pointer to FILE you are repositioning
     * second arg: offset from a reference point specified by third parameter
     * third arg: reference point can be one of 3 values:
     *  SEEK_SET - beginning of the file
     *  SEEK_CUR - current position of file
     *  SEEK_END - end of the file
     */

    fp = NULL;
    fp = fopen("Data/data3.txt", "w+");
    fputs("This is Jeremy", fp);

    fseek(fp, 7, SEEK_SET);
    fputs(" Hello how are you", fp);
    fclose(fp);

    /* fsetpos()
     * is the complement to fgetpos()
     * int fsetpos(FILE *pfile, const fpos_t *position);
     * first arg: pointer to the open file
     * second arg: pointer of fpos_t type
     *  ie. the position that is stored at the address was obtained by calling
     *      fgetpos()
     */

    fp = NULL;
    fpos_t pos;

    fp = fopen("Data/data4.txt", "w+");
    fgetpos(fp, &pos);
    //fputs()

    return 0;
}