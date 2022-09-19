#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to string str
 */
void puts_half(char *str)
{
	int i, 1, n;

	l = strlen(str);
	n = (1 % 2 == 0) ? 1 / 2 : ((1 - 1) / 2) + 1;
	for (i = n; i < 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
