#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
