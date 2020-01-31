#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // toupper() convert from lowercase to uppercase
    // tolower() conver from upper to lower case
    char myString[] = "all lowercase words in here";
    for(int i=0; i<sizeof(myString) - 1; i++) {
        myString[i] = toupper(myString[i]);
    }
    printf("%s\n", myString);

    // atof convert ascii digit chars to float e.g. "98.4" to 98.4
    // atoi convert ascii digit chars to integer e.g. "98" to 98
    // strtod convert entire string to double
    // strtof convert entire string to float
    char myNum[] = "98.4";
    double n = strtod(myNum, NULL);
    printf("%.1f\n", n);

}