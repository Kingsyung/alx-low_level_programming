#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all elements of a linked list
 * @h: a pointer to the list_t list to be print
 * @h:  iterate over the list starting from the head
 * @nil:  print each element's string value. If it's NULL, we print (nil)
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	printf("[");
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current->str);
		}
		count++;
		current = current->next;
		if (current != NULL)
			printf(", ");
	}
	printf("]\n");

	return count;
}
