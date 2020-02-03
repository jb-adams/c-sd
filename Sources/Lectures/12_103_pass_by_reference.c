/* Pass By Reference vs Pass By Value
 *
 * there are different ways you can pass data to a function: by reference,
 * or by value
 * 
 * C does exclusively pass by value
 * Java does pass by value
 * 
 * But with pointers, we essentially simulate pass by reference
 * 
 * Pass by Value: the function copies the actual value of an arg into the 
 * formal parameter of the function
 * changes made to the parameter inside the function have no effect on the 
 * argument outside the function
 * 
 * C programming uses pass by value to pass arguments
 * 
 * returning a pointer lets you return a whole set of values (ie. a pointer
 * to a whole array)
 */

#include <stdio.h>

void swap(int *x, int *y);
int * myFunction();

int main() {

    int a = 100;
    int b = 200;

    printf("Before swap, a is %d\n", a);
    printf("Before swap, b is %d\n", b);
    swap(&a, &b);
    printf("After swap, a is %d\n", a);
    printf("After swap, b is %d\n", b);

    printf("myFunction: %d\n", *myFunction());
}

// simulate pass by reference through pointers
void swap(int *x, int *y) {

    int temp = *y;
    *y = *x;
    *x = temp;
}

// return a pointer
int * myFunction() {
    int foo = 28;
    return &foo;
}