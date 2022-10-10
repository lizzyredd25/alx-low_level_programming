#include <stdio.h>
/**
 * my_recursion - get the natural square root of a number.
 * @n: number
 * @i: index
 * Return: returns the natural square root of n.
 */
int my_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (my_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - get the natural square root of a number.
 * @n: number
 * Return: returns the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (my_recursion(n, 0));
}
