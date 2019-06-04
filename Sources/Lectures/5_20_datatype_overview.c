/*
 * Purpose: overview of data types in C
 * Author: Jeremy Adams
 * Date: 2019
 */

/*
 * declare variable with its data type keyword and name
 * int
 * char
 * double
 * 
 * can be separated by commas
 * 
 * to assign a value to a variable, use "=" operator
 */

#include <stdio.h>

int main() {

    // declaration
    int a;
    char b;
    double c;
    float d;

    // multiple declaration
    int x, y, z;

    // assign
    x = 10;

    // initialize: declare and assign at the same time
    int j = 24;
    printf("%d\n", j);

    return 0;
}