#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints the alphabet in lowercase, followed by a new line.
 * return - Always 0 (Success)
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
