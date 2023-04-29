#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: double pointer to the list
 * @str: string that  needs to be duplicated
 * Return: address of the new element, or NULL if it is unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
