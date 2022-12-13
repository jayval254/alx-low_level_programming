#include "main.h"
/**
 * print_sign -> prints the sign of a number either positive or negative
 * @n: n is the argument passed
 * Return: Return 1, 0, or -1 depending on the condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

