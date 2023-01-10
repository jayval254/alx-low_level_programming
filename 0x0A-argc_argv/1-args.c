#include <stdio.h>
/**
 * main - beginning of program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i + 1 == argc)
			printf("%i\n", i);
	}
	return (0);
}
