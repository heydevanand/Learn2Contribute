/* 
Write a program that asks the user to enter the number of month, and prints the number of days before this month 
since the start of the year.
*/

#include <stdio.h>

int main()
{
    int month, sum_days;
    printf("Enter the month no: ");
    scanf("%d",&month);
    sum_days = 0;
    int n = 0;
    switch (month) {
        case 12: sum_days += 30;
        case 11: sum_days += 31;
        case 10: sum_days += 30;
        case 9: sum_days += 31;
        case 8: sum_days += 31;
        case 7: sum_days += 30;
        case 6: sum_days += 31;
        case 5: sum_days += 30;
        case 4: sum_days += 31;
        case 3: sum_days += 30;
        case 2: sum_days += 29;
        case 1: n = 1; break;
        default: puts("Error: no such month in my calendar.");
    }
    if (n)
    printf("Their are %d days before the given month.",sum_days);
    return 0;
}