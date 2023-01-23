#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - print char
 * @valist: variable arguments list
 * Return: void
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_int - prints int
 * @valist: variable argument list
 * Return: void
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * print_float - prints float
 * @valist: variable arguments list
 * Return: void
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_string - prints string
 * @valist: variable arguments list
 * Return: void
 */
void print_string(va_list valist)
{
	char *s;
	s = va_arg(valist, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: Null
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j;
	va_list all;

}
