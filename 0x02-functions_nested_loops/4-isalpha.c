#include "main.h"
/**
 * int _isalpha - checks for alphabetic characters
 * returns: 1 if character is letter, else 0
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
