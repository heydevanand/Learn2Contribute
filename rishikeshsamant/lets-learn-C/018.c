/* Write a program to copy an array of 10 elements to another array and then print elements of array from middle points to both ends.*/

#include <stdio.h>

int main()
{
	int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
	float *source = numbers;
	float *copy = biggerNumbers;
	for (i = 0; i < 10; i++)
	{
		*copy = *source;
		copy++;
		source++;
	}
	float *biggerEnd = copy;
	float *biggerStart = biggerNumbers;
	float *middle1 = biggerNumbers+4;
	float *middle2 = middle1+1;
	for ( ; middle1>=biggerStart ; middle1--, middle2++)
	{
		printf("%.1f\n", *middle1);
		printf("%.1f\n", *middle2);
	}
	return 0;

}