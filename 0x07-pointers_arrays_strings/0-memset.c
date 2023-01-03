#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @s: string
 * @b: character
 * @n: integer
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
