/* Write a program to use malloc() and free() to allocate a memory size of int data type to pointer, then store a int on that allocated memory and print it.
   After this free memory.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(sizeof(int));
    if (ptr != NULL){
        *ptr = 200;
        printf("%d",*ptr);
        free(ptr);
    } else
    printf("allocation failed");
    return 0;
}
