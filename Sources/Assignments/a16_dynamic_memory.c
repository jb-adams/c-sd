/* Challenge: Using Dynamic Memory
 *
 * write a program that allows a user to input a text string
 * print the text that was inputed (get_s)
 * the user can enter the limit of the string they are entering
 *  you can use this limit when invoking malloc
 * 
 * create a char pointer only, no character arrays
 * 
 * release the memory that was allocated
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int nChars;
    char *str = NULL;

    printf("Enter the max number of characters in your string: ");
    scanf("%d", &nChars);
    str = (char *)malloc(nChars * sizeof(char));

    printf("%p\n", str);

    if (!str) {
        printf("Could not reserve bytes");
    } else {
        printf("Enter your string: \n");
        scanf(" ");
        gets(str);
        printf("You entered: %s\n", str);
    }

    free(str);
    str = NULL;
    return 0;
}