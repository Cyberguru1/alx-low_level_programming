#include "main.h"
/**
 * print_alphabet - prints low case alphabet
 * main - program to print lower case alphabet
 * Return: end
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
