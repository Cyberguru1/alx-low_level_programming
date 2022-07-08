#include "main.h"

/**
 * _isdigit - checkes if an input is a digit
 * @c: the character tho chechk
 * Return: 0 on false, 1 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9' )
		return (1);
	else
		return  (0);
}
