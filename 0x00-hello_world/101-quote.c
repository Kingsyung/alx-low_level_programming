#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point for the C code
*
* Description: printing of  a quote by dora
*
* Return: This reurns an int value of 1 if successful
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
