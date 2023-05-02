#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (s);
}
