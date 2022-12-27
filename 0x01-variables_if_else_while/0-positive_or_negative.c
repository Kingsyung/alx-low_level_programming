#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if n is positive, negative or 0
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (a < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (a > 0)
	{
		printf("%d is positive\n", n);
	}
		return (0);
}
