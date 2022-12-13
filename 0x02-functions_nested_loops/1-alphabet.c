#include "main.h"
/**
 * main - print the alphabet in lowercase
 * Return: return 0 always on success
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
