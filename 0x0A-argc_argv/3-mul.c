#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - beginning of program, print result of multiplication
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on succeess, return 1 on error
 * If the program does not receive two arguments, print error return 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
