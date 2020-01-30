/*
 * Purpose: Print all prime numbers from 0-100
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ARR_MAXLEN 100

int main() {

    int primes[ARR_MAXLEN] = {2,3};
    int index = 2;

    for(int i = 4; i<=100; i++) {
        bool is_prime = true;

        for(int j = 0; j<=ARR_MAXLEN; j++) {
            int prime_number = primes[j];
            if (prime_number == 0) {
                break;
            }

            if (i % prime_number == 0) {
                is_prime = false;
            }
        }

        if (is_prime) {
            primes[index] = i;
            index++;
        }
    }

    for(int i = 0; i<=ARR_MAXLEN; i++) {
        if (primes[i] == 0) {
            break;
        }
        printf("%d\n", primes[i]);
    }
}