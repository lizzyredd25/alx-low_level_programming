#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees the memory allocated to a 2D array
 * @grid: grid of the 2D array
 * @height: height of the 2D array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
