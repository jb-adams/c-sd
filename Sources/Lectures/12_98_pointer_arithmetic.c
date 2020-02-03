/* Pointer Arithmetic
 * pointers to arrays comes into play when sequencing through the elements of
 * array
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arraySum(int array[], const int n);
int arraySumPtr(int *array, const int n);

int main() {

    // *valuesPtr can access the first integer in the values array: values[0]
    // *(valuesPtr + 3) will access values[3]

    // you can set values this way too
    // *(valuesPtr + 10) = 27

    // if valuesPtr points to values[0] then you can set it to point to
    // values[1] by incrementing valuesPtr (ie. valuesPtr++)
    // want to avoid out of bounds errors when incrementing or decrementing
    // array pointer

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    int *valuesPtr = values;
    printf("The sum is %i\n", arraySum(values, 10));
    printf("The sum is %i\n", arraySumPtr(valuesPtr, 10));

    // you cannot do pointer arithmetic on arrays, the syntax is different
    // when treating arrays in array notation vs pointer notation
    return 0;
}

// when passing an array to a function, you are really passing a pointer to
// the array
int arraySum(int array[], const int n) {
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ++ptr) {
        sum += *ptr;
    }
    return sum;
}

int arraySumPtr(int *array, const int n) {
    int sum = 0;
    int * const arrayEnd = array + n;

    for (; array < arrayEnd; ++array) {
        sum += *array;
    }

    return sum;
}