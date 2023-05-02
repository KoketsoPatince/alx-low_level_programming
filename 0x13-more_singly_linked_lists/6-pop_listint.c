#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t.
 * @head: A pointer to the address of the head of the list.
 * Return: The head node's data (n) and if the linked list is empty return 0.
 */


int pop_listint(listint_t **head)
{
	listint_t *new;
	int s;

	if (*head == NULL)
		return (0);

	new = *head;
	s = (*head)->n;
	*head = (*head)->next;

	free(new);

	return (s);
}
