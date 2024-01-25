#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - xxxxx
* @a: xxxxxx
* @b: xx
*
* Return: yyyxx
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - yyysyyyy
* @a: xxxxyxxxx
* @b: vvvdvvv
*
* Return: weeweww
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - xxxxxxx
* @a: xxyxxxx
* @b: yyxyyy
*
* Return: etetetee
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - fgfggfgfgfg
* @a: ysyysysys
* @b: xyxyxyy
*
* Return: yyyyyzyyyyy
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - yyyy xxxxxxx wwwwww
* @a: xyxyxyxyxyxyx
* @b: sysysysysyyysys
*
* Return: xyxyxyxyxyxyx
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
