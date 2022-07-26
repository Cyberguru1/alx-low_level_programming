#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * str_concat - function that concatenates the content of the input string
 * @s1: first string
 * @s2: second string
 * Return: returns NuLL if an empty string is passed or falilure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, words = 0, f = 0;
	char *buff;

	if (s2 == NULL || s1 == NULL)
	{
		return (NULL);
	}

	for (i; s1[i] != '\0'; i++)
	;
	for (f; s2[f] != '\0'; f++)
	;

	buff  =  malloc(sizeof(char) * (f + i + 1));

	while (*s1)
	{
		buff[words++] = s1[words++];
	}
	buff[words] = " ";
	while (*s2)
	{
		buff[words++] = s2[words++];
	}
	return (buff);
}
