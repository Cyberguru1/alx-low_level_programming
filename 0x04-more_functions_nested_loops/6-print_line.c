#include "main.h"

/**
 * print_line - print '_' char
 * @n: number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
