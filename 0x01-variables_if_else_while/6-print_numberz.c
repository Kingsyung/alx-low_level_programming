#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y + '0');
	}
	putchar('\n');

	return (0);
}
