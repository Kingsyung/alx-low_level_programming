#include <stdio.h>

/**
 * main - print alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alp[x]);
	}
	putchar('\n');
	return (0);
}
