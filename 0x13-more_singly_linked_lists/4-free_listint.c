#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t.
 * @head: A pointer to the head of the listint_t to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
