/*
 * Purpose: define functions of character arrays without using library functions
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLength(const char string[]);
void stringConcatenate(char result[], const char str1[], const char str2[]);
bool stringCompare(const char str1[], const char str2[]);

int main() {

    printf("IAMASTRING stringLength: %d\n", stringLength("IAMASTRING"));
    printf("how long is this string? stringLength: %d\n", stringLength("how long is this string?"));
    printf("Revenge of the String stringLength: %d\n", stringLength("Revenge of the String"));

    char result1[100] = "";
    stringConcatenate(result1, "first ", "second");
    printf("%s\n", result1);

    char result2[100] = "";
    stringConcatenate(result2, "Luke ", "Skywalker");
    printf("%s\n", result2);

    char result3[100] = "";
    stringConcatenate(result3, "Mario ", "Luigi");
    printf("%s\n", result3);

    printf("Mario and Mario: %d\n", stringCompare("Mario", "Mario"));
    printf("Mario and Marionette: %d\n", stringCompare("Mario", "Marionette"));
    printf("Banana and Bahaha: %d\n", stringCompare("Banana", "Bahaha"));
}

int stringLength(const char string[]) {
    int i = 0;
    bool terminator = false;

    do {
        char c = string[i];
        if (c == '\0') {
            terminator = true;
        } else {
            i++;
        }
    } while(!terminator);
    return i;
}

void stringConcatenate(char result[], const char str1[], const char str2[]) {

    int i = 0;
    int str1Len = stringLength(str1);
    int str2Len = stringLength(str2);
    
    for(int a=0; a<str1Len; a++) {
        result[i] = str1[a];
        i++;
    }

    for(int b=0; b<str2Len; b++) {
        result[i] = str2[b];
        i++;
    }
}

bool stringCompare(const char str1[], const char str2[]) {

    int i = 0;
    bool isEqual = true;
    bool terminator = false;

    do {
        if (str1[i] == '\0' || str2[i] == '\0') {
            terminator = true;
        }
        if (str1[i] != str2[i]) {
            isEqual = false;
        }
        i++;
    } while(!terminator && isEqual);
    
    return isEqual;
}