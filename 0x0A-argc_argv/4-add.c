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
	int sum, a, b;

	sum = 0;
	if (argc > 0)
	{
		for (a = 1; b < argc; a++);
		{
			for (b = 0; argv[a][b] != '\0'; b++);
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
