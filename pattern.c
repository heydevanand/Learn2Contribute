#include<stdio.h>
#include<cs50.h>

int main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        int x = get_int("Enter the number of rows: ");
        printf("%d", x);
    
        for(j=1;j<=i;j++)
    {
        printf("*");

    }
    printf("\n");
}
return 0;}