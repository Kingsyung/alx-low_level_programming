#include "main.h"

/**
 * _pow – function to calculates (base ^ power)
 * @base: base of exponent
 * @power: power of exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int nums;
	unsigned int y;

	nums = 1;
	for (y = 1; y <= power; y++)
		nums *= base;
	return (nums);
}

/**
 * print_binary - print numbers in binary notation
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
