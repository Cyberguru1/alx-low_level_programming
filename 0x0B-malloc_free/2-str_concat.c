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
	int word1 = 0, word2 = 0, n, i = 0;
	char *buff;

	if (s2 == NULL || s1 == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		word1++;
		s1++;
	}

	while (*s2)
	{
		word2++;
		s2++;
	}


	buff  =  malloc(sizeof(char) * (word1 + word2 + 1));
	if (buff == NULL)
		return (NULL);


	for (n = 0; n < word1; n++, i++)
	{
		buff[i] = s1[n];
	}
	for (n = 0; n < word2; n++, i++)
		buff[i] = s2[n];

	buff[i] = '\0';
	return (buff);

}
