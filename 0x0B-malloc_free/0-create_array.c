#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character value
 * Return: NULL if size = 0,  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(c));
	while (i < size)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
		i++;
	}
	return (arr);
}
