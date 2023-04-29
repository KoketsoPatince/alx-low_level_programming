#include "lists.h"
#include <string.h>
#include <stdio.h>

/*
 * add_node- adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int index = 0;

	while (str[index])
		index++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = index;
	new->next = *head;

	*head = new;

	return (new);
}
