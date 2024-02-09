#include "main.h"

/**
 * binary_to_uint - function to convert binary number to an unsigned int.
 * @b: pointing to a string with a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int nums;

	nums = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		nums <<= 1;
		if (b[x] == '1')
			num += 1;
	}
	return (nums);
}
