/* The Bubble Sort */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int number[n];
    int i, swapped;
    for (i=0; i<n; i++){
        printf("Enter the no: ");
        scanf("%d",&number[i]);
    }
    do {
        swapped = 0;
        int aux;
        for (i=0; i<n-1; i++){
            if (number[i] > number[i+1]){
                swapped = 1;
                aux = number[i];
                number[i] = number[i+1];
                number[i+1] = aux;
            }
        }
    } while (swapped);
    printf("\nsorted array:\n");
    for (i=0; i<n; i++){
        printf("%d\n",number[i]);
    }
}