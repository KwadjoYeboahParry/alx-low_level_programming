#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case followed by new line
 * Return: 0
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
