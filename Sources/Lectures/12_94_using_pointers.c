/*
 * you can perform pointer arithmetic
 * e.g. increment the byte address by 1, by 2, etc
 * add/subtract byte address so you are more efficient moving through memory
 * 
 * you can find the different of two pointers
 * you can use relational operators to compare the values of two pointers
 * 
 * you can subtract one pointer from another to get an integer
 * you can subtract an integer from a pointer and get a pointer
 * be careful of array out of bounds errors when incrementing/decrementing 
 *  pointers
 * 
 * 
 * 
 */

/* const and pointer
 * what is constant? the value the pointer is pointing to, or the pointer's 
 * address?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    // POINTER CONSTANT SCENARIO 1:
    // The value pointed to by the pointer cannot change
    long value = 9999L;
    const long *pvalue = &value; // defines a pointer to be constant
                                 // cannot change what the pointer is pointing
                                 // to
    
    // *pvalue = 8888L; // WILL MAKE AN ERROR

    printf("%lu\n", *pvalue);
    value = 7777L; // the value pointed to has changed, but we did not use the
                   // pointer to make the change
    printf("%lu\n", *pvalue);



    // POINTER CONSTANT SCENARIO 2:
    // The pointer's value (ie. the address is stores) cannot change
    int count = 43;
    int count2 = 72;
    int *const pcount = &count;
    // pcount = &count2; // WILL MAKE AN ERROR, CANNOT CHANGE WHAT THE POINTER'S
                         // ADDRESS VALUE
    *pcount = 69; // we can dereference and change its value
    printf("%d\n", *pcount);

    // POINTER CONSTANT SCENARIO 3:
    // Both value pointed to by pointer AND pointer's stored address
    // cannot change
    int a = 123;
    int b = 456;
    const int *const pnum = &a;

    // *pnum = 789; // WILL MAKE AN ERROR;
    // pnum = &b; // WILL MAKE AN ERROR
                         
    return 0;
}