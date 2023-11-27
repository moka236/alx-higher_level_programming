#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check the cycle - check if list cycle ocurr
 * @list : point to the list to check
 * return 1 if cycle oucrr , 0 otherwise 
 */
int check_cycle(listint_t *list);
{
	listint_t *lis1 = list , lis2 = list;
	
	while (lis2 && lis2->next)
	{
		lis1 = lis1->next;
		lis2 = lis2->next->next;
		if(lis1==lis2)
			 return (1);
	}
	return (0);
}
