#include <ctype.h>
#include "main.h"

/**
 * _isupper - check if a character is an uppercase
 * @c: character to check
 * Return: 1 if c is upoercase, 0 otherwise
 */
int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
