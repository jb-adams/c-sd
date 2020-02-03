/* Challenge: Declaring and Initializing a structure
 *
 * write a program that declares a structure and prints out its content
 * employee structure with 3 members
 *  name (character array)
 *  hireDate (int)
 *  salary (float)
 * 
 * declare and initialize an instance of an employee type
 * read in a second employee from the console and store it in a structure of
 * type employee
 * print out the contents of each employee
 */

#define NAMELEN 100

#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[NAMELEN];
    int hireDate;
    float salary;
};

int main() {

    struct employee e1 = {.name = "Jeremy", .hireDate = 2019, .salary = 100000};
    struct employee e2;

    printf("Enter employee name: ");
    scanf("%s", e2.name);
    printf("Enter employee hire date: ");
    scanf("%d", &e2.hireDate);
    printf("Enter employee salary: ");
    scanf("%f", &e2.salary);

    printf("Employee 1: %s\t%i\t%.2f\n", e1.name, e1.hireDate, e1.salary);
    printf("Employee 2: %s\t%i\t%.2f\n", e2.name, e2.hireDate, e2.salary);
}