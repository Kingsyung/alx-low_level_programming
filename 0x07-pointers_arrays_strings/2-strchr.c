#include "main.h"

/**
 * _strchr - print match
 * @s: array
 * @c: char
 *
 * Return: char return
 */

char *_strchr(char *s, char c);
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	if (s[i] == c)
		return (s + 1);
	return (0);
}
