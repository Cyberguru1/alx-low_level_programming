#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Determine if a random number is positive, negative or zero.
 *Return - 0 on succes
 * description - postive or negative
 *it executes, and prints it
 */
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
