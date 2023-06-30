#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints elements in a linked list
 * @h: pointer to singly linked lists
 *
 * Return: the number of elements prinited
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
