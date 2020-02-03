/* Structures and Pointers
 *
 * Pass a pointer to a struct as an argument
 * Passing a pointer is more efficient
 * 
 * structures can also contain pointers to other structures
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

struct intPtrs {
    int *p1;
    int *p2;
};

// Character arrays or character pointers?
// generally, character pointers in structs are better
// use a pointer to handle the string, use with malloc

int main() {

    struct date todaysDate;
    struct date *pDate;
    pDate = &todaysDate;
    (*pDate).day = 21; // dereference then dot notation

    // C has its own dereferencing syntax for pointers to structures
    // "->"
    // x->y
    pDate->month = 9;
    pDate->year = 2019;

    printf("Today's date is %d/%d/%d\n", pDate->day, pDate->month, pDate->year);

    // STRUCTURES CONTAINING POINTERS
    struct intPtrs pointers;
    int i1 = 100, i2;
    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;
    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
}