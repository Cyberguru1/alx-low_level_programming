#include "main.h"

/**
 * _isdigit - Checks if an input is a digit.
 * @c: the character to checked.
 * Return: 0 on false, 1 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
