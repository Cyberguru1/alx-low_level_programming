#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);


	retrun (ptr);
=======
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
>>>>>>> 5755c1a55ae5db6b16cb8d082c408f1f309c55e9
}
