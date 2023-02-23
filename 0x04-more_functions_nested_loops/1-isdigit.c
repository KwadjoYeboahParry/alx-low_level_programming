#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 * Return: 1 if charcter is digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
