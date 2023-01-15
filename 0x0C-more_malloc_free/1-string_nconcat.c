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
	char *ptr;
	int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (n > y)
		n = y;
	ptr = malloc((x + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (z = 0; z < x; z++)
	{
		ptr[z] = s1[z];
	}
	for (; z < (x + n); z++)
	{
		ptr[z] = s2[z - x];
	}
	ptr[z] = '\0';
	return (ptr);
}
