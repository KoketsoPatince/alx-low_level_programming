#include "lists.h"
#include <stddef.h>
/*
 * list_len - finds the elements in a linked list
 * @h: pointer to the list 
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
