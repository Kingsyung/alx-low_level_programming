#include "main.h"

/**
 * get_endianness – to check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int y;
	char *b;

	y = 1;
	b = (char *)&y;
	return (*b);
}
