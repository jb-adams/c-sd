/*
 * associate an external file name with an internal file pointer
 * use fopen() function, which returned the file pointer
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    // sample fopen call
    // FILE *fopen(const char * restrict name, const char * restrict mode)
    // first arg is a pointer to a string that is the file name
    // second arg is the file mode (ie. read, write, append)
    // if file cannot be opened for some reason, fopen() returns NULL
    // you should check for a NULL file always when opening

    /* Modes
     * "w" write
     * "a" append
     * "r" read
     * "w+" update (reading and writing), overwriting the existing file
     * "a+" update (reading and writing) appending to end of existing file
     * "r+" update (reading and writing)
     *
     */

    FILE *pfile = NULL;
    char *filename = "Data/data1.txt";
    pfile = fopen(filename, "r");
    if (pfile == NULL) {
        printf("Failed to open %s.\n", filename);
    } else {
        printf("File handle OK\n");
    }

    // rename a file
    // use rename() function
    // int rename(const char *oldname, const char *newname)

    // close a file
    // use fclose() function - takes file pointer
    // returns EOF int if error (-1)
    // EOF = end of file
    // 0 if successful

    // delete a file
    // use remove() function - takes file name (string)
    // file cannot be open when you try to delete it
}