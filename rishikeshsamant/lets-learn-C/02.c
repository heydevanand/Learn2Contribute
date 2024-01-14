// To find largest of three numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    int max;
    max = num1;
    if (num2>num1 && num2>num3)
    max = num2;
    if (num3>num1 && num3>num2)
    max = num3;
    printf("Largest no: %d",max);
    return 0;
}