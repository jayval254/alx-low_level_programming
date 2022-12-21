#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an input array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}
