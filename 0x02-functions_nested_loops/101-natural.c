#include <stdio.h>
/**
 * main - list all the natural numbers below 1024 (excluded)
 * should be multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sim += i;
	}

	printf("%d\n", sum);

	return (0);
}
