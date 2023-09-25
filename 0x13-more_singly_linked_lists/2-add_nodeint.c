#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 **add_nodeint- insert new element in first row
 *@head :pointer to the head
 *@n: intiger
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
