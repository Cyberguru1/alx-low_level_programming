#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimenional
 * array
 * @height: parameter representing the row
 * @width: parameter reperesenting the column
 * Return: pointer to a 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int *ptr = (int *)malloc((width * height) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		ptr[i] = 0;
	return (*ptr);
}
