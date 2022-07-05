#include "main.h"
/**
 * main - program to print lower case alphabet
 * Return: end
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;
count = 0;
whilte (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n')
}
}
