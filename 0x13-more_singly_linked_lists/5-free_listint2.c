#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t and sets the head to NULL.
 * @head: A pointer to the head of the listint_t to be freed.
 */


void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}

	head = NULL;
}
