#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int _strlen1(char *s);

/**
 * str_concat - function that concatenates the content of the input string
 * @s1: first string
 * @s2: second string
 * Return: returns NuLL if an empty string is passed or falilure
 */

char *str_concat(char *s1, char *s2)
{
	int word1, word2, n, i = 0;
	char *buff;

	word1 = (s1 == NULL) ? 0 : _strlen1(s1);
	word2 = (s2 == NULL) ? 0 : _strlen1(s2);


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

/**
 * _strlen1 - returns the length of a passend string
 * @s: string to be passed
 *
 * Return: returns length of sting
 */

int _strlen1(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
