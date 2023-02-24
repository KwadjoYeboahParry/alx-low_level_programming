#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print the number from 0 to 9
 * excludes 2 and 4
 * Return: numbers to print
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
