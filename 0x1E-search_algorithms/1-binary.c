#include "search_algos.h"

/**
 * print_array - prints array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * Return: (void)
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * (-1) if the value is not present, or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array + left, right - left);
		i = ((left + right) / 2);
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}
