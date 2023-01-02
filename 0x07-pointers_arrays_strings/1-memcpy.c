#include "main.h"
/**
 * _memcpy - copying memory area
 * @dest: destination memory area
 * @src: source memory area.
 * @n: bytes filled
 * Return: the pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		i = 0;
		*(dest + i) =  *(src + i);
		i++;
	}
	return (dest);
	}
