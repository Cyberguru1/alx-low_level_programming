#include <stdio.h>

/**
 * main - prints all arguments it receives, one per line
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 Always(success)
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
