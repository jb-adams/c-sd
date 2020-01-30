/*
 * Purpose: calculate the area and perimeter of a rectangle
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double length;
    double width;
    double perimeter;
    double area;

    printf("Enter rectangle length: ");
    scanf("%lf", &length);

    printf("Enter rectangle width: ");
    scanf("%lf", &width);

    perimeter = (width * 2) + (length * 2);
    area = length * width;

    char *output = "Your Rectangle\n"
                   "Length: %.2f\n"
                   "Width: %.2f\n"
                   "Perimeter: %.2f\n"
                   "Area: %.2f\n";

    printf(output, length, width, perimeter, area);
}