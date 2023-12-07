#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add element at the end of the list
 * @head: list
 * @n: element in list
 * Return: new element/NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ne, *st;

	st = *head;
	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	if (*head == NULL)
	{
		ne->next = NULL;
		ne->n = n;
		ne->prev = NULL;
		*head = ne;
		return (ne);
	}
	while (st->next)
	{
		st = st->next;
	}
	st->next = ne;
	ne->prev = st;
	ne->next = NULL;
	ne->n = n;
	return (ne);
}
