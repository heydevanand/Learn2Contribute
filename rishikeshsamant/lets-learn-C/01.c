//To find largest of two numbers

#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int max;
    max = num1;
    if (num2>num1)
    max = num2;
    printf("Largest no: %d",max);
    return 0;
}