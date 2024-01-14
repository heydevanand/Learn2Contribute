/* Write a program that prints fibonacci sequence which prints: 
1- first ten numbers from the fibonacci sequence.
2- only odd numbers.
3- only even numbers. */

#include <stdio.h>

int main(void)
{
    int fibo[10];
    fibo[0] = 1;
    fibo[1] = 1;
    int i;
    for (i=2; i<10; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    } 
    for (i=0; i<10; i++){
        printf("%d\n",fibo[i]);
    }
    for (i=0; i<10; i++){
        if ((i++)%2 != 0)
        printf("%d\n",fibo[i]);
    for (i=0; i<10; i++){
        if ((i++)%2 == 0)
        printf("%d\n",fibo[i]);
    }
    }
    return 0;
}
    