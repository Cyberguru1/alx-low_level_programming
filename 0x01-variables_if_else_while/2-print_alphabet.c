#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 * Return - 0 on sucess
 * descrption - returns all alphabets
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
