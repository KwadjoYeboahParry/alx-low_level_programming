#include <stdio.h>
/**
 * main - printing alphabets in lower and upper case
 * Return: 0
 */
int main(void)
{
	char LU;

	for (LU = 'a'; LU <= 'z'; LU++)
		putchar(LU);

	for (LU = 'A'; LU <= 'Z'; LU++)
		putchar(LU);

	putchar('\n');

	return (0);
}
