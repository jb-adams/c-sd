// accessing pointers
/*
 * how to dereference/get the value of what the pointer is pointing to?
 * the pointer asterisk (*) is also used in multiplication (context-dependent)
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 15;
    int * pointer = &number;
    int result = 0;
    result = *pointer + 5;
    printf("%d\t%p\t%d\n", number, pointer, result);

    int count = 10, x;
    int *int_pointer;
    int_pointer = &count;
    x = *int_pointer;
    printf("count = %i, x = %i, int_pointer = %p\n", count, x, int_pointer);
    printf("%d\n", (int)sizeof(int_pointer));

    printf("\nAnother demo:\n");
    number = 0;
    int *pnumber = NULL;
    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void *)&pnumber);
    printf("pnumber's size: %d bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);
}