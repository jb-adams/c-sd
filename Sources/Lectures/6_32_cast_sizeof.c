/*
 * Purpose: cast and sizeof operators
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    /*
     * type conversions of data can happen implicitly or explicitly
     * must understand rules for conversion of floats <<>> integers, etc.
     * 
     * truncated - data becomes less precise
     * promoted - data becomes more precise
     * 
     * when floats are converted to integers, it gets truncated (decimal val
     *  removed)
     * 
     * cast operator - explicit data type conversions
     * how it works: (type) variable
     * ie. (int) my_string
     */

    short int a = (int) 21.51 + (int) 26.99;
    printf("%d\n", a);

    /*
     * sizeof operator - find out how many bytes are occupied in memory by a
     * given type
     */

    int size = sizeof(a);
    printf("%d\n", size);
   
    return 0;

    /*
     * other operators:
     * * - for pointers
     * ?: - ternary operator
     */
}