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
	int i = 0, words = 0, f = 0, n;
	char *buff;

	if (s2 == NULL || s1 == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		words++;
		i++;
		s1++;
	}

	while (*s2)
	{
		words++;
		s2++;
		f++;
	}


	buff  =  malloc(sizeof(char) * (words + 2));


	for (n = 0; n < words + 1; n++)
	{
		if (n == i)
			buff[n] = ' ';
		if (s1[n] != '\0')
			buff[n] = s1[n];
		buff[n] = s2[n];
	}
	buff[words + 1] = '\0';
	return (buff);

}
