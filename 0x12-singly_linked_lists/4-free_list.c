#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_list - Frees a list.
 * @head: A pointer to the list_t list.
 */

void free_list(list_t *head)
{
	list_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head->str);
		free(head);
		head = n;
	}
}
