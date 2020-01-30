/*
 * Purpose: overview of data types in C
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h> // this lets you use the bool datatype instead of _Bool
                     // also lets you use true/false keywords

int main() {

    /*
     * enums: specify a variable and the valid values it could have
     *  ie. your own data type 
     *  then we can create a new variable of this data type
     * 
     */

    enum primaryColor {red, yellow, blue}; // declare the enum
    enum primaryColor my_color, gregs_color; // declare 2 variables of type
                                             // primaryColor
    my_color = red;

    // example: months
    enum month {january, february, march, april, may, june, july, august,
                september, october, november, december};
    enum month my_month;

    my_month = march;
    printf("%d\n", my_month);

    // example: directions
    enum direction {up, down, left = 10, right}; // we can explicitly assign
                                                 // left to int value 10

    /*
     * char: represents a single character, such as the letter 'a'
     * defined in single quotes, not double quotes: 'A' 'Z'
     * unsigned chars can't be negative, ie. they are only positive chars
     * don't confuse chars with strings
     */

    char my_char = 'F';
    char grade = 65; // looks up 65 in ascii table and provides character
                     // it works, but it's poor form

    /*
     * escape characters: represents a unique character or action
     * ie backspacing, next line, terminal bell ring
     */

    char newline = '\n';
    char backspace = '\\';
    char carriage_return = '\r';

    /*
     * gender example
     */

    enum gender {male, female};
    enum gender my_gender;
    enum gender another_gender = female;

    my_gender = male;
    bool isMale = (my_gender==another_gender);
    printf("%d%c", isMale, newline);


    return 0;
}