#include <stdio.h>
#include <stdlib.h>

/**
 * main - This multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: This :wqarray that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
