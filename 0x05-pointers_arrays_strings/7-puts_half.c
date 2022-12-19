#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0, i, j;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		j = l / 2;
	else
		j = (l + 1) / 2;
	for (i = j; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
