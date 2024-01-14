// Write a program to print sum of numbers in an array containing 5 numbers from 1 to 5 using for loop.

#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    int i = 0;
    for (i=0; i<5; i++){
        sum += a[i];
    }
    printf("Sum of numbers in array is %d", sum);
    return 0;
}