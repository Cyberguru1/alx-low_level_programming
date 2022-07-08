#include "main.h"

/**
 * _isupper - Checks for uppercase charaters
 * @c: The Character to be checked
 *  Return: 1 if charackter is upper, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
