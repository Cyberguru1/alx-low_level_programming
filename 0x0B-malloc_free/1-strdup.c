#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space 
 * @str: string to allocate
 * Return: returns null if str is null else a pointer to 
 * the duplicate str
 */
char *_strdup(char *str)
{
	if (str == NULL || str =='\0')
	{
		return ('\0');
	}

	char *buff = malloc(sizeof(str)/sizeof(char));
	int i = 0;

	while (str[i] != '\0')
	{
		buff[i] = str[i];
		i++;
	}
	return (buff);
	return (0);
}
