#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, else 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == 0)
		{

			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (0);
		}
	}
	return (grid);

}
