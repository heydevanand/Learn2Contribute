/*
To take n numbers and find largest of them.
To stop loop enter -1
*/
#include <stdio.h>

int main()
{
    int num;
    int max = -10000;
    scanf("%d",&num);
    while (num != -1){
        if (num > max)
        max = num;
        scanf("%d",&num);

    }
    printf("largest no: %d",max);
    return 0;
}
