#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char j;

	while (s[l] != '\0')
		l++;
	while (i < l--)
	{
		j = s[i];
		s[i++] = s[l];
		s[l] = s[j];
	}
}
