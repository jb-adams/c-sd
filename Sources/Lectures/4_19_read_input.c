/*
 * Purpose: This program reads input from the user
 * Author: Jeremy Adams
 * Date: 2019
 */

/*
 * use scanf function to read integers, floats, strings etc.
 * characters have to be converted into other data types because they are
 * coming from the keyboard.
 * 
 * data type specifiers:
 *   %lf -> double
 *   %s -> string
 *   %d -> integer
 */

#include <stdio.h>

int main() {

    char str[100];
    int i;
    double d;

    printf("Enter a value: ");

    /*
     * 1st argument: scanf expects 2 things: a string then a number
     * 2nd argument: assign the parsed string to str
     * 3rd argument: convert to integer (&) and assign it to i
     * 4th argument: convert to double (&) and assign it to d
     */
    scanf("%s %d %lf", str, &i, &d);
    printf("\nYou entered: %s %d %lf\n", str, i, d);

    return 0;
}