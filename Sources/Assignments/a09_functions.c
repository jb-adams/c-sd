/*
 * Purpose: create and use reusable functions
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(unsigned int numA, unsigned int numB);
float absoluteValue(float num);
float squareRoot(float num);

int main() {
    printf("gcd 5 and 10: %d\n", gcd(5, 10));
    printf("gcd 5 and 12: %d\n", gcd(5, 12));
    printf("gcd 20 and 8: %d\n", gcd(20, 8));
    printf("gcd 30 and 9: %d\n", gcd(30, 9));

    printf("abs 5.0: %.1f\n", absoluteValue(5.0));
    printf("abs -5: %.1f\n", absoluteValue(-5));
    printf("abs -100.0: %.1f\n", absoluteValue(-100.0));
    printf("abs 2000: %.1f\n", absoluteValue(2000));

    printf("squareRoot 25.0: %.2f\n", squareRoot(25.0));
    printf("squareRoot 20.0: %.2f\n", squareRoot(20.0));
    printf("squareRoot -10.0: %.2f\n", squareRoot(-10.0));
    printf("squareRoot 144: %.2f\n", squareRoot(144));

    return 0;
}

int gcd(unsigned int numA, unsigned int numB) {
    
    int small;
    int large;
    int gcd = 1;

    if (numA > numB) {
        large = numA;
        small = numB;
    } else {
        large = numB;
        small = numA;
    }

    for (int i=small; i>0; i--) {
        if (large % i == 0 && small % i == 0) {
            gcd = i;
            break;
        }
    }
    return gcd;
}

float absoluteValue(float num) {
    float abs = num;
    if (abs < 0.0) {
        abs *= -1.0;
    }
    return abs;
}

float squareRoot(float num) {
    if (absoluteValue(num) != num) {
        printf("Can only get square root of positive number\n");
        return -1.0;
    }

    return sqrt(num);
}