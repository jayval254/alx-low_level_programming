#include <stdio.h>
/**
 * main - beginning of program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
