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
	int j = 0;

	arr = malloc(sizeof(str));
	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
