/* Dynamic Memory Allocation
 *
 * in C the compiler automatically allocates the correct amount of storage
 * for you based on the data type
 * 
 * it is frequently desirable to dynamically allocate storage while a program
 * is running
 * 
 * 3 choices when allocating memory for an array
 * 1. define the array to contain the max number of possible elements
 * 2. use a variable-length array to size array at runtime
 * 3. allocate the array dynamically using one of C's memory allocation routines
 * 
 * Option 1:
 *  if you define array like: int dataArray[1000];
 *  you cannot change the size of the array to be larger
 *  size is defined at compile time
 * 
 * Option 3:
 *   you can get storage as you need it
 *   this approach enables you to allocate memory as the program is executing
 *   depends on concept of a pointer and provides a strong incentive to use
 *   pointers in code
 *   it's only possible through pointers
 *   allows you to create pointer at runtime that are just large enough
 * 
 * Heap vs. Stack
 * data can be stored on the heap, or on the stack
 * Dynamic memory allocation stores everything on heap
 * stuff on the stack, you don't control, however you do manuall control the 
 * heap
 * you must free the space you have allocated to allow it to be reused
 */

