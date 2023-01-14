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
	unsigned int a, b;

	ptr = malloc((a + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; b++, a++)
		ptr[a] = s2[b];
	ptr[a] = '\0';
	return (ptr);
}
