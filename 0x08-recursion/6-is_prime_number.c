#include <stdio.h>
#include <math.h>
/**
 * my_primer - checks if a number is a prime number
 * @n: number
 * @i: index
 * Return: 1 if n is a prime number, else 0
 */
int my_primer(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (my_primer(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	return (my_primer(n, i));
}
