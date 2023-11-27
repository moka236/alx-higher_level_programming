#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *lis1;
	listint_t *lis2;

	lis1 = list;
	lis2 = list;
	while (list && lis1 && lis1->next)
	{
		list = list->next;
		lis1 = lis1->next->next;

		if (list == lis1)
		{
			list = lis2;
			lis2 =  lis1;
			while (1)
			{
				lis1 = lis2;
				while (lis1->next != list && lis1->next != lis2)
				{
					lis1 = lis1->next;
				}
				if (lis1->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
