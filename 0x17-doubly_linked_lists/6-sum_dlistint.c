#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sm = 0;
	while (head != NULL)
	{
		sm += head->n;
		head = head->next;
	}
	return (sm);
}
