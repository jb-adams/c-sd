#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // strchr and strstr - searching a string
    // strtok - tokenizing a string
    // islower, isupper, isalpha, isdigit - analyzing a string

    // pointers
    int number = 25;
    int *pNumber = &number; // declare a pointer with *
                            // get the address of a variable & (dereferencing)

    // strchr - searches a string for a specific character
    char *pGotChar = NULL;
    pGotChar = strchr("this is a String!", 'S');
    printf("%c\n", *pGotChar);

    char *pFound = NULL;
    pFound = strstr("Every dog has his day", "dog");
    printf("%c\n", *pFound);

    // tokenizing - finding delimiters/boundaries (e.g. comma)
    char s[] = "apple,banana,kiwi";
    char *token;
    token = strtok(s, ",");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    printf("%d\n", islower(*"FOO"));
}