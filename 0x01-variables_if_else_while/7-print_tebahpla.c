#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	int ra;

for (ra = 'z'; ra >= 'a'; ra--)
	putchar(ra);

putchar('\n');

return (0);
}

