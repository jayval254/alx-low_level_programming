#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: sting 2 to concatenate
 * Return: 2 concatinated stings, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int x, y, z;

	z = 0;
	arr = malloc(sizeof(*s1 + *s2));
	if (arr == NULL)
		return (NULL);
	y = 0;
	while (s1[y] != '\0')
	{
		arr[z] = s1[y];
		y++;
		z++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		arr[z] = s2[x];
		x++;
		z++;
	}
	return (arr);
	free(arr);
}
