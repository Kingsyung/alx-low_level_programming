#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - to print name using pointer to function
 * @name:it's string to add
 * @f: it's pointer to function
 * Return: retuns nothing
 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;
f(name);
}

