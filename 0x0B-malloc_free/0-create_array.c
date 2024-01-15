#include "main.h"
#include <stdlib.h>

/**
* create_array - This creates an array of size and assign char c
* @size: is size of array
* @c: is char to assign
* Description: To create an array of size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
