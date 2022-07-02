#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - assigns a random number to int n everytime
 *return - Always 0 on (Succes)
 * description - postive or negative
 * 
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
