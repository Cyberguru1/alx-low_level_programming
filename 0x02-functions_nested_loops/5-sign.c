#include "main.h"
/**
 * print_sign - prints expression of palazo
 * Return: 0 on sucess
 * @n : number to check
 */
int print_sign(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
