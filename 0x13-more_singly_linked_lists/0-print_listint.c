#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that print number of lists
 * @h: pointer to the struct listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
