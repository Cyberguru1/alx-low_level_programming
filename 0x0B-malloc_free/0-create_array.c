#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function to initialize a char
 * @c: charater to be initialized
 * @size: size of char
 * Return: returns null if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ('\0');

	char a[size];

	a  = {c}

	return (*a);
}
