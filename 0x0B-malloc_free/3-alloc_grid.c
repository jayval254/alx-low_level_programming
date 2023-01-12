#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @height: height of the arrray
 * @width: width of array
 * Return: pointer to a 2 dimensional array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
int i, j, k, **al_mem;

if (width <= 0 || height <= 0)
	return ('\0');
al_mem = malloc(sizeof(int *) * height);
if (al_mem == NULL)
{
	free(al_mem);
	return ('\0');
}
for (i = 0; i < height; i++)
{
	al_mem[i] = malloc(sizeof(int) * width);
	if (al_mem[i] == NULL)
	{
		for (k = i; k >= 0; k--)
			free(al_mem[k]);
		free(al_mem);
		return ('\0');
	}
	for (j = 0; j < width; j++)
		al_mem[i][j] = 0;
}
return (al_mem);
}
