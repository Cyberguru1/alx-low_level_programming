#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to allocate
 * Return: returns null if str is null else a pointer to
 * the duplicate str
 */
char *_strdup(char *str)
{
	if (str == NULL || str == '\0')
	{
		return ('\0');
	}
	int i = 0, size = 0, c;

	for (c = 0; str[c] != NULL; c++)
	{
		size++;
	}

	char *buff = malloc(sizeof(char) * size);


	while (str[i] != '\0')
	{
		buff[i] = str[i];
		i++;
	}
	return (buff);
}
