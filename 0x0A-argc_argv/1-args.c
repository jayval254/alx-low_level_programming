#include <stdio.h>
/**
 * main - beginning of program
 * @args: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
