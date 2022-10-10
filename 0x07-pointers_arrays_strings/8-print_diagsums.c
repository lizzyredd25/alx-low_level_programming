#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: array of square matrix
 * @size: size of array a
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, smr, sml, r, l, sz;

	smr = 0;
	sml = 0;
	r = size + 1;
	l = size - 1;
	sz = size * size;
	for (i = 0, j = l; i < sz; i += r, j += l)
	{
		smr += *(a + i);
		sml += *(a + j);
	}
	printf("%d, %d", smr, sml);
	printf("%c", 10);
}
