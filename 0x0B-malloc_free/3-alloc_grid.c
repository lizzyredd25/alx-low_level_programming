#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of the 2D array
 * @height: height of the 2D array
 * Return: a pointer a 2D array of integer
 */
int **alloc_grid(int width, int height)
{
	int **cr;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	cr = (int **)malloc(height * sizeof(int *));
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		cr[i] = (int *)calloc(width, sizeof(int));
		if (cr[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(cr[k]);
			free(cr);
			return (NULL);
		}
	}
	return (cr);
}
