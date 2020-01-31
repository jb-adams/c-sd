// pointer: a variable that contains a memory address as its value

/*
 * syntax:
 * must specify the data type the pointer will be pointing to
 * int * pNumber (e.g. the pointer contains an address storing an int)
 * char * pC (pointer to char)
 * float * pFloat (pointer to Float)
 * the space between asterisk and variable name is optional
 *  programmers tend to include a space in pointer declaration, and omit it
 *  during pointer dereferencing
 * pointer is essentially storing a hexidecimal address
 * %p is the format specifier for pointers
 * you should ALWAYS assign a value to a pointer
 * you can use NULL pointers (it does not point to anything)
 *  e.g. int *pNumber = NULL;
 * include <stdeff.h> to allow for null pointers
 * 
 * address of operator - &
 * & will yield the address of a variable
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 99;
    int *pnumber = &number; // address of the variable number
    printf("%d\t%p\n", number, pnumber);
}