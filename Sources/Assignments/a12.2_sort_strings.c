/*
 * Purpose: bubble sort a list of strings
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int numStrings = 0;
    printf("Input number of strings: ");
    scanf("%d", &numStrings);

    char strings[numStrings][100];
    printf("Input %d strings, one per line\n", numStrings);
    for(int i = 0; i < numStrings; i++) {
        scanf("%s", strings[i]);
    }

    int changes;
    do {
        changes = 0;
        for(int i=0; i < numStrings - 1 ; i++) {
            int cmp = strcmp(strings[i], strings[i+1]);
            if (cmp > 0) {
                char cpyA[100];
                char cpyB[100];
                strcpy(cpyA, strings[i]);
                strcpy(cpyB, strings[i+1]);
                strcpy(strings[i], cpyB);
                strcpy(strings[i+1], cpyA);
                changes++;
            }
        }
    } while(changes > 0);

    printf("\nYour strings, sorted:\n");
    for(int i=0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}
