/* Write a program that asks the user to enter a number, and print which day of the week that number corresponds to. The days are indexed from 0(Sunday) 
   to 6(Saturday). Store the name of days in an array and print the name of the day in two ways: with pointer arithmetic and with array indexing. Before 
   the program gets a value from the array, it must first check if the given day is greater than or equal to zero and less than 7. If not, it should print
   the message: Error, no such day.*/

#include <stdio.h>
int main()
{
    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day;
    scanf("%d",&day);
    if (day>=0 && day<7)
    {
        printf("Pointer version: %s\n",days+day);
        printf("Array index version: %s\n",days[day]);
    }
    else
    {
        printf("Error, no such day.");
    }
    return 0;
}