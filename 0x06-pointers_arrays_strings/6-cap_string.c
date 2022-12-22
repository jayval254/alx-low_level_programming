#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 1, j;
	char b[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
		while (s[i] != '\0')
		{
			for (j = 0; b[j] != '\0'; j++)
				if (s[i - 1] == b[j] && (s[i] >= 'a' && s[i] <= 'z'))
					i++;
		}
		return (s);
}
