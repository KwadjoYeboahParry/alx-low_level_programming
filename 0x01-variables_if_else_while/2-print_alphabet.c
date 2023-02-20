#include <stdio.h>
/**
 * main - prints alphabets in lowercase;
 * Return: 0
 */
int main(void)
{
	char lwc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
	{
		putchar(lwc);
	}
	putchar('\n');
	return (0);
