#include <stdlib.h>
#include <time.h>
/**
 * Main- Entry point
 * Return - sucess(0)
 *
 */
int main(void)
{
int n;
n = rand() - RAND_MAX /2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);

}
