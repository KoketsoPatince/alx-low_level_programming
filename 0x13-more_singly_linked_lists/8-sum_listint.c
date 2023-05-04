#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Calculates the sum of all data(n) of a listint_t.
 * @head: A pointer to the head of the list.
 * Return: If the list is empty return 0,otherwise return the sum of the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
