#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array, If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min;
	ptr = malloc((j + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= j; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
