#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid from previous task
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
