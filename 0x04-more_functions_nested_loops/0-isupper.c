#include "main.h"
/*
 * _isupper - checks if a letter is uppercase
 * @x: number to be checked
 * Return: 1 if letter is uppercase else 0
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}
