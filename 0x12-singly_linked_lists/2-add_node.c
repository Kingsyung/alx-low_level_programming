Toggle navigationMenu 
H
holbertonschool-low_level_programming
Project information
Repository
Files
Commits
Branches
Tags
Contributors
Graph
Compare
Issues
1
Merge requests
0
CI/CD
Deployments
Packages and registries
Monitor
Analytics
Wiki
Snippets

Close sidebar
Open sidebar
Martin Smith
holbertonschool-low_level_programming
Repository
holbertonschool-low_level_programming
0x12-more_singly_linked_lists
2-add_nodeint.c
2-add_nodeint.c
763 bytes
#include "lists.h"
static listint_t *new_node(const int n);
/**
 * add_nodeint - add a node at the head of a list.
 * @head : pointer of a pointer to a list.
 * @n : value to set the new list to.
 *
 * Return: pointer to a pointer of listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}
	new = new_node(n);
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
 */
static listint_t *new_node(const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
