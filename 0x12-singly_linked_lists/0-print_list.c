#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that returns number of nodes
 * @h: pointer to the struct list_t
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
