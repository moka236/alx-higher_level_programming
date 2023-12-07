#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pt = h;
	size_t i = 0;

	while (pt && pt->prev)
		pt = pt->prev;
	while (pt)
	{
		printf("%d\n", pt->i);
		i++;
		pt = pt->next;
	}
	return (i);
}
