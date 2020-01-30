/*
 * Purpose: bitwise operators
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    /*
     * bit shift operators operate on the bits in integer values
     * & - bitwise AND
     * | - bitiwse OR
     * ^ - bitwise XOR
     * ~ - bitwise NOT, flips bits
     * << - bit left shift, move bits to the left
     * >> - bit right shift, move bits to the right
     */

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    /* if bit of a is true AND bit b is true,
     * that bit in c will be true
     * a = 0011 1100 = 60
     * b = 0000 1101 = 13
     * c = 0000 1100 = 12
     */
    int c = a & b; 

    /* if bit of a is true OR bit b is true,
     * that bit in d will be true
     * a = 0011 1100 = 60
     * b = 0000 1101 = 13
     * d = 0011 1101 = 61
     */
    int d = a | b; 

    /* move bits 2 spaces to the left
     * a = 0011 1100 = 60
     * e = 1111 0000 = 240
     */
    int e = a << 2; 

    /* move bits 2 spaces to the right
     * a = 0011 1100 = 60
     * f = 0000 1111 = 15
     */
    int f = a >> 2; 

    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    printf("f: %d\n", f);
       
    return 0;
}