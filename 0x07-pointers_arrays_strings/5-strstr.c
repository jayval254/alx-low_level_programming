#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: a string to search within
 * @needle: the substring that you want to find
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1 = needle, *s2 = haystack;

	while (*haystack)
	{
		s1 = needle;
		s2 = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = s2 + 1;
	}
	return (NULL);
}
