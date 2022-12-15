#include <stdio.h>
#include "main.h"
/**
 * main - Fizz-Buzz test
 * Description: prints the numbers 1 - 100
 * Fizz for multiples of 3, Buzz for multiples of 5
 * and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("Buzz\n");
	return (0);
}
