#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ls;
	char *str;

	va_start(ls, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(ls, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && j != n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
