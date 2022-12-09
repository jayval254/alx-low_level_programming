#include <stdio.h>
/*
 * main - prints all possible combinations of single digit numbers
 * Description: using function main
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
		putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}

