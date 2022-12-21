#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @b: an input string
 * Return: always 0 on success
 */
char *string_toupper(char *b)
{
	int i = 0;

	while (*(b + i))
	{
		if (*(b + i) >= 'a' && *(b + i) <= 'z')
			*(b + i) -= 'a' - 'A';
		i++;
	}
	return (b);
}
