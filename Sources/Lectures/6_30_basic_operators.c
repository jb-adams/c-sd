/*
 * Purpose: basic operators
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    /*
     * arithmetic operators
     * + - * /
     */

    int a = 33;
    int b = 15;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;

    a++;
    b--;

    char *output = "a is now %d\n"
                   "b is now %d\n"
                   "c is %d\n"
                   "d is %d\n"
                   "e is %d\n"
                   "f is %d\n";
    printf(output, a, b, c, d, e, f);

    /*
     * logical operators
     * && - AND, if both operands are true (non-zero), the condition is true
     * || - OR, if any operand is true, condition is true otherwise false
     * | - NOT, reverses the logical state of the operand
     */

    bool g = true;
    bool h = false;
    bool result_a = g && h;
    bool result_b = g || h;
    bool result_c = !g;

    printf("%d\n", result_a);
    printf("%d\n", result_b);
    printf("%d\n", result_c);

    /*
     * A += B -> A = A + B
     * A -= B -> A = A - B
     * A *= B -> A = A * B
     * A /= B -> A = A / B
     * A %= B -> A = A % B
     */
    
    return 0;
}