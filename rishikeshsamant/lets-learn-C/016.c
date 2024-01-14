// Write a program to take input of ip address in four parts also store and print them in human readable format.

#include <stdio.h>

int main()
{
    char IPpart1[4];
    char IPpart2[4];
    char IPpart3[4];
    char IPpart4[4];
    char IPaddress[16];
    scanf("%s",&IPpart1);
    scanf("%s",&IPpart2);
    scanf("%s",&IPpart3);
    scanf("%s",&IPpart4);
    sprintf(IPaddress, "%s.%s.%s.%s", IPpart1, IPpart2, IPpart3, IPpart4);
    printf("%s",IPaddress);
    return 0;
}