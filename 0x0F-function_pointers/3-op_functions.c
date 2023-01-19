#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: division of a nad b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
