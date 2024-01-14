/* Write a program that fils a 26 element array with letters from "a" to "z". When the array is filled, the program 
should print them in reverse order, then print only the array elements constitute the word great.*/

#include <stdio.h>

int main(void)
{
    char alphabet[26];
    char j = 'a';
    for (j; j<='z'; j++){
        alphabet[j-'a'] = j;
    }
    for (j = 'z'; j>='a'; j--){
        printf("%c\n",alphabet[j-'a']);
    }
    printf("%c",alphabet['g'-'a']);
    printf("%c",alphabet['r'-'a']);
    printf("%c",alphabet['e'-'a']);
    printf("%c",alphabet['a'-'a']);
    printf("%c",alphabet['t'-'a']);
    return 0;
}