#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Prints the alphabet in lowercase
 *return: Always 0 (Success)
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
