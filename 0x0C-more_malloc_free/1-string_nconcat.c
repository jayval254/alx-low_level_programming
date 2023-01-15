#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
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
	unsigned int x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = _strlen(s1);
	y = _strlen(s2);
	if (n < y)
		y = n;
	ptr = malloc(x + y + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < x; z++)
		*(ptr + z) = *(s1 + z);
	for (z = 0; z < y; z++)
		*(ptr + (z + x)) = *(s2 + z);
	*(ptr + (z + x)) = '\0';
	return (ptr);
}
