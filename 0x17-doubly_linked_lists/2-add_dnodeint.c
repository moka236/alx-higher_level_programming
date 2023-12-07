#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new element at beginiing of list
 * @head: pointer
 * @n: element in list
 * Return: new Element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->prev = NULL;
	ne->next = *head;
	ne->n = n;
	if (*head != NULL)
		(*head)->prev = ne;
	*head = ne;
	return (ne);
}
