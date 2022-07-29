#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function that returns an allcated memory
 * @b: size of memory input
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);


	retrun (ptr);
}