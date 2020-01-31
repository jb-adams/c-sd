/*
 * Purpose: basic pointers
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 500;
    int *pnumber = NULL;
    pnumber = &number;

    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    printf("pointer's address: %p\n", &pnumber);
    printf("pointer's value: %p\n\n", pnumber);

    printf("value of what pointer is referencing: %d\n", *pnumber);

    return 0;
}