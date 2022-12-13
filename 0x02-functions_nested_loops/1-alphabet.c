#include "main.h"
/**
 * main - print the alphabet in lowercase
 * Return: always return 0 on success
 * print_alphabet: prints the lowercase alphabets, followed by a new line
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
