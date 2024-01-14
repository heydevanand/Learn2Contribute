/* Write a program that prints the size of types in your architecture. Check this for all basic types,
variables of some types and some pointers.
*/


#include <stdio.h>

int main(void) 
{
	int v;
	printf("%d byte for chars\n", sizeof(char));
	char c;
	printf("%d byte for char variables\n", sizeof(c));

	printf("%d bytes for shorts\n", sizeof(short int));
	short int si;
	printf("%d bytes for short variables\n", sizeof(si));
	
	printf("%d bytes for ints\n", sizeof(int));
	int i;
	printf("%d bytes for int variables\n", sizeof(i));
	
	printf("%d bytes for longs\n", sizeof(long int));
	long int li;
	printf("%d bytes for long variables\n", sizeof(li));
	
	printf("%d bytes for long longs\n", sizeof(long long int));
	long long int lli;
	printf("%d bytes for long long variables\n", sizeof(lli));
	
	printf("%d bytes for floats\n", sizeof(float));
	float f;
	printf("%d bytes for float variables\n", sizeof(f));
	
	printf("%d bytes for doubles\n", sizeof(double));
	double d;
	printf("%d bytes for double variables\n", sizeof(d));
	
	printf("%d bytes for pointers\n", sizeof(int *));
	int *pi;
	printf("%d bytes for pointer variables\n", sizeof(pi));

	printf("%d bytes for address of char variable\n", sizeof(&c));
	char *pc=&c;
	printf("%d bytes for pointer to char variable\n", sizeof(pc));
	printf("%d byte for value stored by pointer to char variable\n", sizeof(*pc));

	return 0;
}