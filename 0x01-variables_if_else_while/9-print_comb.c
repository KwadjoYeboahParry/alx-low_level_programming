#include <stdio.h>
/**
 * main - prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{

		putchar(n);
		if (n != 58)
		{
			putchar(',');
			putchar(' ');
		}

	}

		return (0);
}
