#include "holberton.h"
/**
 * _isalpha -> checks for alphabetic character.
 * @c: is the int argument
 * Return:Return 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	int _isalpha(int c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		else
			return (0);
	}
}
