#include <stdio.h>
#include "lists.h"
/**
 *listint_len-count single linked list
 *@h:head
 *Return: number of eleements
 */
size_t listint_len(const listint_t *h)
{
	count = 0;

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
