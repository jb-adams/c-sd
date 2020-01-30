/*
 * Purpose: command line arguments
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    /*
     * allow the user to provide information to the program via the command line
     * when main() is called, two arguments are passed
     * argc - argument count (number of arguments passed)
     * argv - argument vector (array of character pointers)
     */

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Arg 1 is the program name: %s\n", argument1);
    printf("Arg 2 is the cli argument: %s\n", argument2);
    
    return 0;
}