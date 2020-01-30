/*
 * Purpose: display average rainfall by year and month
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main() {

    float rainfall[YEARS][MONTHS] = {
        {6.2, 8.8, 4.0, 1.0, 7.3, 2.2, 8.2, 1.2, 9.8, 8.9, 6.8, 5.1},
        {4.8, 2.9, 6.2, 3.7, 6.6, 6.8, 1.1, 5.0, 9.4, 7.4, 9.9, 4.0},
        {1.1, 7.3, 7.1, 0.5, 9.5, 5.2, 0.9, 2.1, 4.5, 5.3, 4.6, 9.4},
        {6.3, 6.7, 0.9, 4.6, 4.0, 5.2, 8.4, 2.2, 6.2, 8.3, 1.0, 0.0},
        {1.8, 3.2, 5.5, 5.7, 2.0, 7.6, 4.1, 9.9, 6.3, 3.2, 1.9, 2.2}
    };

    char months[MONTHS][3] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct",
        "Nov", "Dec"
    };

    char years[YEARS][4] = {"2015", "2016", "2017", "2018", "2019"};

    float yearly_sums[YEARS];
    for(int i=0; i<YEARS; i++) {
        yearly_sums[i] = 0.0;
    }

    float monthly_sums[MONTHS];
    for(int i=0; i<MONTHS; i++) {
        monthly_sums[i] = 0.0;
    }

    for(int year_i = 0; year_i < YEARS; year_i++) {
        for(int month_i = 0; month_i < MONTHS; month_i++) {
            float val = rainfall[year_i][month_i];
            yearly_sums[year_i] += val;
            monthly_sums[month_i] += val;
        }
    }

    // yearly avg printout
    printf("YEARLY AVERAGES\n");
    for(int a=0; a<YEARS; a++) {
        for(int b=0; b<4; b++) {
            printf("%c", years[a][b]);
        }
        float year_avg = yearly_sums[a] / MONTHS;
        printf(": %.2f\n", year_avg);
    }

    printf("\n");

    // monthly avg printout
    printf("MONTHLY AVERAGES\n");
    for(int a=0; a<MONTHS; a++) {
        for(int b=0; b<3; b++) {
            printf("%c", months[a][b]);
        }
        printf("  ");
    }
    printf("\n");

    for(int a=0; a<MONTHS; a++) {
        float month_avg = monthly_sums[a] / YEARS;
        printf("%.2f ", month_avg);
    }
    printf("\n");
}