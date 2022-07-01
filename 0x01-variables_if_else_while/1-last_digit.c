#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
v = n % 10;
/* your code goes there */
if (v > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, v);
}

if (v == 0)
{
printf("Last digit of %d is 0", n);
}

if (v < 6 && v != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, v);
}
return (0);
}
