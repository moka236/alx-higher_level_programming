#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *st, *ch;

	st = head;
	while (st != NULL)
	{
		ch = st->next;
		free(st);
		st = ch;
	}
}
