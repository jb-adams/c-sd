/*
 * Purpose: Number guessing game
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_MIN 0
#define RANDOM_MAX 20
#define GUESSES 5

int main() {

    time_t t;
    bool success = false;
    srand(t);
    int randomNumber = rand() % (RANDOM_MAX + 1);
    

    printf("This is a guessing game.\n");
    printf(
        "I have chosen a number between %d and %d which you must guess\n\n",
        RANDOM_MIN,
        RANDOM_MAX
    );

    for(int i = GUESSES; i > 0; i--) {
        int guess;
        printf("You have %d tries left.\n", i);
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations. You guessed it!\n\n");
            success = true;
            break;
        } else if (guess < RANDOM_MIN || guess > RANDOM_MAX) {
            printf(
                "I said the number is between %d and %d\n\n",
                RANDOM_MIN,
                RANDOM_MAX
            );
        } else if (guess > randomNumber) {
            printf(
                "Sorry, %d is wrong. My number is less than that.\n\n",
                guess
            );
        } else {
            printf(
                "Sorry, %d is wrong. My number is greater than that.\n\n",
                guess
            );
        }
    }

    if (!success) {
        printf("The correct number was %d.\n", randomNumber);
    }
}