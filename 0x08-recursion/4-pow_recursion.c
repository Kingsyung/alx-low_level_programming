#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer to be raised
 * @y: power
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _poer_recursiont(x,  -1));
	}
	return (1);
}
