#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int d = 0;

	for (b = 0; b < size; b++)
	{
		c += a[b];
		d += a[size - b - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
