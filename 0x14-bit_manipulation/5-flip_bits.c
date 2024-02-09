#include "main.h"

/**
 * flip_bits – to count numbers of bits to be changed
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, countbit = 0;
	unsigned long int currents;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		currents = exclusive >> y;
		if (currents & 1)
			countbit++;
	}

	return (countbit);
}
