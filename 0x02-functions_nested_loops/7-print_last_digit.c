#include "main.h"
/**
 * print_last_digit - print last value of a digit
 * Return: 0 on sucess
 * @n: value to check
 */

int print_last_digit(int n)
{
n = n >= 0 ? n : n * -1;
int last = n % 10;
_putchar('0' + last);
return (last);
}
