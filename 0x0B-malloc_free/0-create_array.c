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
	char *buff = malloc(sizeof(char) * size);
	unsigned int i;


	if (buff == 0 || size == 0)
		return ('\0');

	for (i; i < size; i++)
	{
		buff[i] = c;
	}

	return (buff);
}
