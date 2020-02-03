/* 
 * Arrays of structures
 * create multiple instances of a particular struct inside an array
 * 
 * Structures containing arrays
 */

#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

struct month {
    int numberOfDays;
    char name[3];
};

int main() {

    struct date myDates[10];
    myDates[1].day = 13;
    myDates[1].month = 8;
    myDates[1].year = 1986;

    // initialize an array of structures
    struct date allDates[5] = {
        {12, 10, 1975},
        {12, 30, 1980},
        {11, 15, 2005}
    };

    // initialize just the nth-element
    struct date fooDates[5] = {[4] = {12, 10, 1975}};

    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';
    
    struct month bMonth = {28, {'F', 'e', 'b'}};

    return 0;
}