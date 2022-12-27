#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: always 0
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
