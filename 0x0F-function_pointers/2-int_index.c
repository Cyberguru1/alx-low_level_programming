#include "function_pointers.h"
/**
 * int_index - function to return an index of a number n an
 * @size: size of the array.
 * @cmp: pointer to function
 * @array: array of values.
 * Return: returns -1 if size <= 0, 0 if null inpu
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, x;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (size-- > 0)
	{
		x = cmp(*array);
		if (x)
			return (i);
		i++;
		array++;
	}
	return (-1);
}
