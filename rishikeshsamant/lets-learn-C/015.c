// Write a program that ask for a name and print it in reverse order.

#include <stdio.h>

void main()
{
    int size, i;
    printf("Enter the size of name: ");
    scanf("%d",&size);
    char name[size];
    printf("Enter letters of name one by one: ");
    for (i=0; i<size; i++){
        scanf("%c",&name[i]);
    }
    printf("Name you entered: ");
    for (i=0; i<size; i++){
        printf("%c",name[i]);
    }
}
