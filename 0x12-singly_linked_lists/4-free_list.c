#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees list_t
 * @head: a pointer to the list_t
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
