#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * get_nodeint_at_index - Locates a given node of a listint_t.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to locate and starts at 0.
 * Return: NULL, if the node does not exist,Otherwise return the located node.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
