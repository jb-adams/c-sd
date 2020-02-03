/*
 * Challenge: Pointer Arithmetic
 * Write a program that tests your understanding of pointer arithmetic and
 * the const modifier
 * Write a function that calculates the length of a string
 *  the function should take as a parameter a const char pointer
 *  the function can only determine the length of the string using pointer
 *      arithmetic (incrementation operator ++pointer to get to the end of
 *      the string)
 *  you are required to use a while loop using the value of the pointer to
 *      exit
 *  the function should subtract two pointers (one pointing to the end of the
 *      string and one pointing to the beginning of the string)
 *  the function should return an int that is the length of the string passed
 *  into the function
 */

#include <stdio.h>

int stringLengthByPointer(const char *pString);

int main() {

    char a[] = "a first string";
    char b[] = "booga";
    char c[] = "Luke Skywalker and Darth Vader";

    printf("%s: %i\n", a, stringLengthByPointer(a));
    printf("%s: %i\n", b, stringLengthByPointer(b));
    printf("%s: %i\n", c, stringLengthByPointer(c));

    return 0;
}

int stringLengthByPointer(const char *pString) {
    const char *pStringEnd = pString;

    while(*pStringEnd) {
        pStringEnd++;
    }

    int diff = pStringEnd - pString;
    return diff;
}
