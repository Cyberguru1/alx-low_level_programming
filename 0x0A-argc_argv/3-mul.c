#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two arguments
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Description:
 * If the program does not receive two arguments.
 * your program should print Error, follwed by a new line, and return 1
 *
 * Return: 0 Always(success) and  1 if error
 */
int main(int argc, char **argv)
{
	int i;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
