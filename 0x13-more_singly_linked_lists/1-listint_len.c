#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints elements in a linked list
 * @h: pointer to singly linked lists
 *
 * Return: the number of elements printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
