/*
 * Purpose: format specifiers
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h>

int main() {

    /*
     * used for displaying different data types
     * integers, characters, etc need to be converted before they can be
     * printed out
     * we tell it what to display and how to display it based on the format
     * specifier
     */

    /*
     * %i - integer or bool
     * %f - float
     * %e - double
     * %g - double
     * %c - char
     */

    int a = 89;
    float b = 331.79;
    double c = 8.44e+11;
    char d = 'W';
    bool e = true;

    printf("a = %d\n", a); // use %d to print a digit, 
                           // %d is mapped to variable "a" and interpolated
                           // into string
    printf("b = %f\n", b);
    printf("c = %e\n", c);
    printf("c = %g\n", c);
    printf("d = %d\n", d);
    printf("e = %i\n", e);
    
    return 0;
}