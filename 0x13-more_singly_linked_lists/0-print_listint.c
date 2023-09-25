#include <stdio.h>
#include "lists.h"
/**
 *print_listint-print values
 *@h:head
 *Return: number od elements
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
return (count);
}
