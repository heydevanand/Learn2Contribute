/*
The program takes n num of numbers and counts no of odd no and even no. It will terminate program when 0 is entered.
*/

#include <stdio.h>

int main()
{
    int num;
    int odds = 0;
    int evens = 0;
    scanf("%d",&num);
    while (num !=0){
        if (num%2)
        {
            odds++;
        }
        else
        {
            evens++;
        }
        scanf("%d",&num);
    }
    printf("no of odd numbers is %d and no of even numbers is %d",odds,evens);
    return 0;
}