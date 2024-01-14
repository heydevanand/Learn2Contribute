/* Write a program to find hypotenuse of a right angled triangle. */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, a_sqr, b_sqr, c;
    printf("A: ");
    scanf("%f",&a);
    printf("B: ");
    scanf("%f",&b);
    a_sqr = a*a;
    b_sqr = b*b;
    c= sqrt(a_sqr + b_sqr);
    printf("The hypotenuse of triangle is %f\n",c);
    return 0;
}