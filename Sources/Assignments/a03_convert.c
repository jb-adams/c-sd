/*
 * Purpose: convert number of minutes to days and years
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    const int minutes_per_day = 1440;
    const int days_per_year = 365;

    int minutes;
    int years;
    int days;
    
    printf("Enter a number in minutes: ");
    scanf("%d", &minutes);

    years = minutes / (minutes_per_day * days_per_year);
    int remaining_minutes = minutes - (minutes_per_day * days_per_year * years);
    days = remaining_minutes / (minutes_per_day);

    char *output = "%d minutes is %d years and %d days.\n";
    printf(output, minutes, years, days);
}