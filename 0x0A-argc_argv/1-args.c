#include <stdio.h>

/**
 * main - This prints the number of arguments passed.
 * @argc:This gives number of command line arguments.
 * @argv:It is array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
