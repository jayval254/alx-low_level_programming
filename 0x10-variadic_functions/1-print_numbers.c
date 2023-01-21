#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mynums;
	unsigned int count;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(mynums, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(mynums, int));
		if (n == count + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(mynums);
}
