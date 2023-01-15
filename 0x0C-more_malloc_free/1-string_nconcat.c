#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * @n: bytes
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
