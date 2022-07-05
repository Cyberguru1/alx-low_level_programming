#include <unistd.h>
/**
 * _putchar -writes the char
 * @c: the char to print
 * Return: 0 on sucess
 * on error, -1 is returned
 */
int _putchar(char c)
{
return ((write(1, &c, 1))
}
