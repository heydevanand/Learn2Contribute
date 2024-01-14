/* Write a program that displays the multiplication table of given size. If the size is greater than 20, the program should print the message: Matrix too big.
   Then it should alloate a matrix and fill this matrix with appropriate values. Then the program should print the multiplication table, four characters per 
   cell. Finally, all memory must be filled. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the size for matrix of multiplication table: ");
    int size;
    scanf("%d",&size);
    if (size>20) {
        printf("Matrix too big.");

    }
    else {
        int **matrix = (int **) malloc(size*sizeof(int *));

        int i, j;

        for (i=0; i<size; i++) {
            matrix[i] = (int *) malloc(size*sizeof(int));
        }

        for (i=0; i<size; i++) {
            for (j=0; j<size; j++) {
                matrix[i][j]= (i+1)*(j+1);
            }
        }

        printf("%4c",' ');
        for (i=0; i<size; i++) {
            printf("%4d",i+1);
        }
        printf("\n");

        for (i=0; i<size; i++) {
            printf("%4d",i+1);
            for (j=0; j<size; j++) {
                printf("%4d",matrix[i][j]);
            }
            printf("\n");
        }

        for (i=0; i<size; i++) {
            free(matrix[i]);
        }

        free(matrix);
    }
    return 0;
}