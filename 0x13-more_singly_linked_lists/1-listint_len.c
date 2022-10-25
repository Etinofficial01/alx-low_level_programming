#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
