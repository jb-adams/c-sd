/*
 * Void Pointers
 * void means absence of any type
 * a pointer of type void* can contain the address of a data item of any type
 * deal with data in a type-independent way
 * you have to cast in some way when dereferencing
 * void pointer doesn't know what type of object it is pointing to
 * 
 * e.g. address of variable of type int can be stored in a void pointer
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);

    return 0;
}