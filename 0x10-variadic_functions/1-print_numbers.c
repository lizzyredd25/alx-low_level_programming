#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ls;

	va_start(ls, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ls, int));
		if (separator && j != n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
