#include "main.h"
/**
 * _islower - check if the character is lowercase
 *  @c: a charater argument
 * Return: Return 1 if c is lowercase and return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
