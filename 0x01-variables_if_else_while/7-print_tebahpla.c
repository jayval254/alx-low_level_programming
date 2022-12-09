#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 * Description: using the main function
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
return (0);
}

