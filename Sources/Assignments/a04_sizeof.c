/*
 * Purpose: show the byte size of different data types
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int myInt = 40000;
    char myChar = 'a';
    long myLong = 200000000;
    long long myLongLong = 20000000000000000;
    double myDouble = 100.256;
    long double myLongDouble = 100.256789123456;

    printf("byte size of int is: %zd\n", sizeof(myInt));
    printf("byte size of char is: %zd\n", sizeof(myChar));
    printf("byte size of long is: %zd\n", sizeof(myLong));
    printf("byte size of long long is: %zd\n", sizeof(myLongLong));
    printf("byte size of double is: %zd\n", sizeof(myDouble));
    printf("byte size of long double is: %zd\n", sizeof(myLongDouble));
}