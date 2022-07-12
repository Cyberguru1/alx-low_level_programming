#include "main.h"
/**
 * swap_int - a funcion that swap values of two variably assigned integer
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
