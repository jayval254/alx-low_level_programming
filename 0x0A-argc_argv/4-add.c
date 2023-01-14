#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: If no number is passed to the program, print 0,
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, a;

	while (argc-- > 1)
	{
		for (a = 0; argv[argc][a]; a++)
		{
			if (!(isdigit(argv[argc][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
