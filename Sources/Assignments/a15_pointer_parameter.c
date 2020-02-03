/* Challenge: Using Pointers as parameters
 *
 * Write a function the squares a number by itself
 *  the function should define as a parameter an int pointer
 * 
 */

#include <stdio.h>

void squareNumber(int * const num);

int main() {

    int a = 4;
    int b = 6;
    int c = 9;
    int d = 10;
    int e = 12;

    printf("Before Squaring: %d %d %d %d %d\n", a, b, c, d, e);
    squareNumber(&a);
    squareNumber(&b);
    squareNumber(&c);
    squareNumber(&d);
    squareNumber(&e);
    printf("After Squaring: %d %d %d %d %d\n", a, b, c, d, e);
}

void squareNumber(int * const num) {
    *num = *num * *num;
}