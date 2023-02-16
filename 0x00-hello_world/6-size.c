#include <stdio.h>
/**
 * main - printing the size of various types;
 * Return: 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	*sizeof determines the size of a variable;
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(longintType));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));
}
