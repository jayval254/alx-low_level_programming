#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: always 0 on success
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
