/* Write a program that allocates memory of size requested by the user. This program should check if the size is less than 1 MB (1024*1024). If its not than program  
   should print: Too much memory requested. In next step, the program allocates a one dimensional array of characters and fill it with charaters from A to Z then 
   again from A to Z untill array got filled. Then program prints 400 characters or less than 400 if its below it and 40 characters in each row.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    if (size>1024*1024) {
        printf("Too much memory requested");
    }
    else {
        char *memory = (char *) malloc(size*sizeof(char));
        int i;
        for (i=0; i<size; i++) {
            memory[i] = 'A' + (i%26);
        }
        int max_size = size;
        if (max_size>400){
            max_size = 400;
        }
        for (i=0; i<max_size; i++) {
            printf("%c",memory[i]);
            if ((i+1)%40 == 0) {
                printf("\n");
            }
        }
        printf("\n");
        free(memory);
    }
    return 0;
}