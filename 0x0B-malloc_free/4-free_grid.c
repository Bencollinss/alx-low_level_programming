#include "main.h"

/**
 * free_grid - frees 2d grid
 * @grid: pointer to the grid
 * @height: number of rows on the grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
