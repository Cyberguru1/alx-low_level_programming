#include "main.h"
/**
 * manin - check the code
 * Return: 0 on sucess
 * print_alphabet_x10() - prints alphabet ten times
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i< 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
