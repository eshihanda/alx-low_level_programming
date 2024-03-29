#include "lists.h"

/**
 * dlistint_len - return length of a doubly linked list
 * @h: head address
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
