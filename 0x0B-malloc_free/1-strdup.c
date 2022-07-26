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
	int i, size, c;
	char *buff;


	if (str == NULL)
	{
		return ('\0');
	}



	i = 0;
	size = 0;


	for (c = 0; str[c] != '\0'; c++)
	{
		size++;
	}

	buff =  malloc(sizeof(char) * (size + 1));


	while (i < size)
	{
		buff[i] = str[i];
		i++;
	}

	buff[i++] = '\0';

	return (buff);
}
