#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; m < index && head->next; m++)
	{
		head = head->next;
	}
	if (m < index)
		return (NULL);
	return (head);
}
