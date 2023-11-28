#include "lists.h"

/**
 * insert_node - inserts a new node
 * @head: head of a list.
 * @number: index of the list where the new node is
 * added.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *j;
	listint_t *h_prev;

	j = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (j != NULL)
	{
		if (j->n > number)
			break;
		h_prev = j;
		j = n->next;
	}

	new->j = number;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = j;
		if (j == *head)
			*head = new;
		else
			h_prev->next = new;
	}

	return (new);
}
