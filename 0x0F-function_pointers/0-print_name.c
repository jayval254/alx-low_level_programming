#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name of the person
 * @f: parameter for the function pointer
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
