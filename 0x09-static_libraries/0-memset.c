#include "main.h"

/**
 * _memset: This will fill the memory with a constant byte,
 * @s: is the memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: will retun the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) =  b;

	return (s);
}
