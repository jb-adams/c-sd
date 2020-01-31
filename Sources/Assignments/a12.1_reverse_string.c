/*
 * Purpose: reverse a string
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(const char string[]);

int main() {
    char input[100];
    printf("Enter a string to reverse: ");
    scanf("%s", input);
    reverse(input);
    return 0;
}

void reverse(const char string[]) {

    int a = 0;
    int len = strlen(string);
    char reversed[len];
    for(int i=len-1; i>=0; i--) {
        reversed[a] = string[i];
        a++;
    }
    reversed[a] = '\0';
    printf("%s\n", reversed);
}