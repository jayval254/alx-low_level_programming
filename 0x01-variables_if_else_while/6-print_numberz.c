#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,and putchar 2x max
 * Description: using the main function
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
