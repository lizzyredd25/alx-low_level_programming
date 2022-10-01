#include <ctype.h>

/**
 * _isdigit - check if a character is an digit
 * @c: character to check
 * Return: 1 if c isdigit, 0 otherwise
 */
int _isdigit(char c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
