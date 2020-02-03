/* malloc, calloc, realloc
 * malloc() - Memory Allocation
 *  allocate dynamic memory at runtime
 *  specify number of bytes to allocate
 *  returned is the address of the first byte in the allocation
 *  store the return value in a pointer
 * 
 * Releasing memory when it's no longer required
 * a memory leak occurs when you do not retain the pointer to reserved memory,
 * therefore you can't free/release it
 * to free memory, you must still have access to the address
 * use the free() function (pass the pointer)
 * you can pass any pointer type
 * set the pointer to NULL to signify it's not pointing to anything (has been
 * freed)
 * 
 * calloc() - allocates memory as a number of elements of a given size
 * it also initializes the memory that is allocated so all bytes are zero
 * calloc takes 2 parameters
 *  number of data items for which space is required
 *  size of each data item
 * 
 * realloc() - reuse or extend memory that you previously allocated using
 * malloc() or calloc()
 * expects 2 parameters
 * a pointer containing an address that was previously returned by a call to
 * malloc() or calloc()
 * the size in bytes of the new memory that you want allocated
 * returns a void pointer to the new memory or NULL if the operation fails
 * realloc() preserves the contents of the original memory area
 * 
 * GUIDELINES
 * allocate large heaps of memory less frequently
 * only hang on to the memory as long as you need it
 * always ensure that you provide for releasing memory that you have allocated
 * do not overwrite the address in a pointer before releasing it
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *pNumber = (int *)malloc(100); // cast memory allocation of 100 bytes
                                       // to an int pointer
                                       // ints a 4 bytes each, so can hold
                                       // 25 ints
                                       // this code won't work on different 
                                       // systems
                                       // instead, use the sizeof operator
    
    int pNumber2 = (int *)malloc(25*sizeof(int)); // will work across different
                                                  // architectures (store 
                                                  // 25 ints)
    // malloc returns a void pointer, which you can re-cast

    // you can request any number of bytes, but if you request too much it will
    // fail (returns NULL if the memory couldn't be reserved)
    // program should be aborted if you can't allocate memory
    // ie. send message and safe exit the program

    // calloc
    // initializes all 75 ints to 0
    int *pNumber3 = (int *)calloc(75, sizeof(int));

    
    // EXAMPLE
    char *str = NULL;

    /* initial memory allocation */
    str = (char *)malloc(15*sizeof(char)); //15 bytes for char pointer
    strcpy(str, "jason"); // pass data
    printf("String = %s, Address = %u\n", str, str);

    /* reallocating memory */
    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
    return(0);
}