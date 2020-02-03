/* Pointers and Strings
 * how to use character pointers to relate to strings
 * can use pointers to easily traverse a string
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void copyString(char to[], char from[]);
void copyStringPtr(char *to, char *from);
void copyStringPtrWhile(char *to, char *from);

int main() {

    // char arrays as pointers
    char *textPtr;
    textPtr++; // points to next char in text, text[1]
               // you can easily manipulate characters one by one
    textPtr--; // goes to previous char in text

    // char 
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    return 0;
}

// copy a string using char array notation
void copyString(char to[], char from[]) {
    int i;
    for(i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }
    to[i] = '\0';
}

// copy a string using char array pointer notation
void copyStringPtr(char *to, char *from) {

    for (; *from != '\0'; from++, to++) {
        *to = *from;
    }
    *to = '\0';
}

void copyStringPtrWhile(char *to, char *from) {
    while (*from) {
        *to++ = *from++; // assignment, then increment (post-incrementation)
    }
    *to = '\0';
}
