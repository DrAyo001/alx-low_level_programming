#include "main.h"

/**
 * main - free_grid - frees a 2d array
 * @grid: memory block to be freed
 * @height: height of the array
 *
 * Return: returns voids
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
