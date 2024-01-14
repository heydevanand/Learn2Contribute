// Program in while loop which takes two no and give their sum until user enters 0 and print last sum. 
//   Print zero if first num is zero and second is 99.

#include <stdio.h>
int main(void)
{
    int num1, num2;
    num2 = -1;
    while (num2!=0)
    {
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("Sum: %d\n",num1 +num2);
    }
    if (num1==99)
    puts("Finish.");
    return 0;
}