#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *  @dest: pointer to a string
 *  @src: pointer to a buffer
 *  Return: always 0 on success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
