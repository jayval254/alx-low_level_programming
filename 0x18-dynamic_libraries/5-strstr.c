#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: a string to search within
 * @needle: the substring that you want to find
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *s1 = haystack;
		char *s2 = needle;

		while (*haystack && *s2 && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (!*s2)
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
