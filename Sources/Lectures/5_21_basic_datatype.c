/*
 * Purpose: overview of data types in C
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h> // this lets you use the bool datatype instead of _Bool
                     // also lets you use true/false keywords

int main() {

    float a = 23.333; // float type
    double b = 55.555555555555555; // double can hold more sig digits
    bool c = true;
    bool d = false;

    /* can specify a datatype with the following keywords
     * short, long, unsigned, signed
     *
     * short: uses less memory than a regular int
     * long: uses more memory than a regular int
     * long long: even more memory than long
     * unsigned: for variables that will only be positive (doesn't store neg)
     * signed: for variables that can be positive or negative (by default)
     */

    short int aa = 123;
    long int bb = 456;
    unsigned int cc = 22;

    return 0;
}