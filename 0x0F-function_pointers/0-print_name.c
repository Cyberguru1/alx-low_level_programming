#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that returns pointer to a function.
 * @name: input variabe.
 * @f: pointer to a func
 * Return: returns a pointer to a func.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	return (f(name));
}
