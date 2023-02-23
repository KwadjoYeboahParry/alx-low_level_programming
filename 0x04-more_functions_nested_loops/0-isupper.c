#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if a letter is upper
 * @c: the number to be checked
 * Return: 1 for uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

