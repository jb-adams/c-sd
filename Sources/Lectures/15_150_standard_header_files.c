/* C Standard Library
 * Standard Header Files
 * <stddef.h> - contains some standard definitions
 *      NULL
 *      offsetof
 *      ptrdiff_t
 *      size_t
 *      wchar_t
 * <limits.h> - various implementation-defined limits for character and int type 
 * <stdbool.h> - file contains definitions for working with Boolean variables
 *      bool
 *      true
 *      false
 * 
 * Various Functions
 * <string.h> - string functions
 *      strcat - concatenate strings
 *      strchr - search string for occurrence of char
 *      strcmp - compare equivalence of 2 strings
 *      strcpy - copies the string s2 to s1, returning s1
 *      strlen - get number of characters in s
 *      strncat - safe concatenation
 *      strncmp - safe compare
 *      strncpy - safe copy
 *      strrchar - return last occurence of a char
 *      strstr - search for substring
 *      strtok - breaks string based on delimiter
 * <ctype.h> - character functions
 *      isalnum, isalpha, isblank, iscntrl, isdigit, isgraph, islower,
 *      isspace, ispunct, isupper, isxdigit
 *      tolower
 *      toupper
 * <stdio.h> - input/output from console and files
 *      fclose
 *      feof - check if we have reached end of file
 *      fflush - flush from buffer
 *      fgetc - get character at byte position
 *      fgetpos - get byte position
 *      fgets - get string from file
 *      fopen - open a file
 *      fprintf - formatted print/write to file
 *      fputc - write character to a file
 *      fputs - write a string to a file
 *      fscanf - read data items from the file using format specifiers
 *      fseek - move byte position
 *      fsetpos - similar to fseek
 *      ftell - tells how many bytes from the beginning of file (offset)
 *      printf - formatted print of output to screen
 *      remove - delete a file
 *      rename - rename a file
 *      scanf - read input from keyboard
 * <stdlib.h>
 * conversion functions
 *      atof - convert ascii string to float
 *      atoi - convert string to int
 *      atol - convert string to long
 *      atoll - convert string to long long
 * dynamic memory functions
 *      calloc - allocate contiguous space for n items of data
 *      free - returns block of memory from the heap
 *      malloc - allocate set number of bytes
 *      realloc - reallocate previously freed memory
 * 
 * Math Functions
 * <math.h> - to use math functions
 * must also link to the math library
 *      acosh - hyperbolic arccosine
 *      asin - arcsine
 *      atan - arctangent
 *      ceil - smallest int greater than or equal to x (round up)
 *      cos - cosine
 *      floor - largest value less than or equal to x (round down)
 *      log - logarithm
 *      nan - not a number
 *      pow - raise x to power of y
 *      remainder - like modulus operator
 *      round - round to nearest int
 *      sqrt - square root
 *      tan - return tangent
 * 
 * Utility Functions
 * <stdlib.h>
 *      abs - absolute value
 *      exit - terminate program execution (the entire program)
 *      abort - generates a core file when error encountered
 *      getenv - get environment variables on the OS
 *      qsort - sorts the data array pointed to by the void pointer arr
 *            - allows custom sort functions
 *      rand - generate a random number
 *      system - run console commands
 * <assert.h>
 *      useful for debugging (assert something is true)
 *      assert() - evaluates if true, if it is false it will raise an error
 * <time.h> - dates and times
 * <errno.h> - reporting of errors - specific error types
 * <locale.h> - formatting of currencies
 * <signal.h> - signals
 * <stdarg.h> - variable number of arguments passed to a function
 * 
 */

