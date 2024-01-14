// to print pyramid of *# for n times in n lines

#include <stdio.h>
int main()
{
    //to print pyramid of *# for n times in n lines
    int n;
    int counter = 0;
    scanf("%d",&n);
    do {
        int innercounter=-1;
        do {
            printf("*#");
            innercounter++;
        } while (counter > innercounter);
        printf("\n");
        counter++;
    } while (n>counter && n<=20);
}