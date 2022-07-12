#include "main.h"
/**
 * print_array - a function that prints n elenments in an array.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - i)
			printf(", ");
	}
	_putchar('\n');
}
