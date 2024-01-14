/*Write a program that takes one word and prints its palindrome. You can use the for loop, the strlen function, and %s format in scanf and printf.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    printf("Enter the word: ");
    scanf("%s",word);
    printf("You entered %s\n",word);
    int length;
    length = strlen(word);
    printf("The palindrome of word is ");
    int i;
    for (i=0; i< length/2; i++)
    {
        char c = word[i];
        word[i]=word[length-i-1];
        word[length-i-1]=c;
    }
    printf("%s\n",word);
    return 0;
}