#include <stdio.h>

/**
 * main -It prints its name, then a new line.
 * @argc:gives  number of command lines arguments.
 * @argv:The array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

