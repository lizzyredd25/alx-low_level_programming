#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sm = 0;
	va_list ls;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (j = 0; j < n; j++)
		sm += va_arg(ls, int);
	va_end(ls);
	return (sm);
}
