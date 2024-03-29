#include "function_pointers.h"
/**
 * array_iterator - function that returns an array of input
 * @array: array of params
 * @size: size of array
 * @action: pointer to func.
 * Return: pointer to func.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{


	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
