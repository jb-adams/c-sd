#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // strlen - get string length
    // strcpy and strncpy - copy strings
    // strcat and strncat - concatenate strings
    // strcmp and strncmp - check string equality

    char myString[] = "This is my string";
    printf("%lu\n", strlen(myString));

    char strSrc[] = "hello string world";
    char strDes[50];

    strcpy(strDes, strSrc); // strcpy not as safe, doesn't check if a larger 
                            // string is being copied to a smaller array
                            // strncpy is safer
    printf("%s\t%s\n", strSrc, strDes);

    char strnSrc[] = "safe string";
    char strnDes[10];
    strncpy(strnDes, strnSrc, 4);
    printf("%s\t%s\n", strnSrc, strnDes);

    // strcat
    char strA[80] = "A starting string. ";
    char strB[40] = "A string to concatenate\n";
    strcat(strA, strB);
    printf("%s", strA);

    // strncat
    char strC[10] = "foo. ";
    char strD[10] = "bar.";
    strncat(strC, strD, 2);
    printf("%s\n", strC);

    // strcmp
    char strE[10] = "apples";
    char strF[10] = "bananas";
    int result = strcmp(strE, strF);
    printf("%d\n", result);
    printf("%d\n", strcmp("APPLES", "APPLES"));

    // strncmp - limit comparison to a certain number of characters
    printf("%d\n", strncmp("astronomer", "astronaut", 5));
}