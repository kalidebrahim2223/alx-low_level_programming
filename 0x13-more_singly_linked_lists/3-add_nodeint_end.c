#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end-insert node at the ende
 *@head:pointer to the head
 *@n:intiger
 *Return: the pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}else
	{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->n = n;
	new->next = NULL;
	}
	return (new);
}
