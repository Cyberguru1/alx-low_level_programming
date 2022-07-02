#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Prints the alphabet in lowercase
 *Return: 0 if Success
 *
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
