#include "main.h"

/**
 * _strlen - a function that return the length of a string.
 * @s: an input string
 * Return: Nothing at all
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
