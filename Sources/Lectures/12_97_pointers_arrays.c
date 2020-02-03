/* Pointer and Arrays
 * arrays and pointers are closely related
 * with a char pointer, you can use dynamic memory management with arrays
 * pointers to arrays are very common - use less memory and execute faster
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {

    int values[100]; // define an array
    int *valuesPtr; // you do not need to define a pointer as pointer to int
                    // array, the pointer is pointing to a specific element
                    // in the array, not the entire array
    valuesPtr = values; // points to the first element in the values array
                        // address operator & is not used
    // valuesPtr = &values[0]; // equivalent to the above

    // ar[i] and *(ar+i) are equivalent in meaning
    // ar++ only works if ar is a pointer variable
    // you can use the address of a pointer to navigate through an array



    return 0;
}