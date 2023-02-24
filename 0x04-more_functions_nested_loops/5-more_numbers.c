#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times of numbers 0 to 14
 * each is followed by a new line
 * Return: numbers to print
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 0)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
