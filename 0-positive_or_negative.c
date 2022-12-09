#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, negative or zero
 * Rwturn: 0 if success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%i is positive\n", n);
	}
	else if (n<0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else 
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}

