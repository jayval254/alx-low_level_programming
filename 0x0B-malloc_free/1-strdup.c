#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string,
 * which is a duplicate of the string str
 * @str: - string
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int j = 1;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}
	arr = malloc((sizeof(char) * j) + 1);
	if (arr == NULL)
		return (NULL);
	while (i < j)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
