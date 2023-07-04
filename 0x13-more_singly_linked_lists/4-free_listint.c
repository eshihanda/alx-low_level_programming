#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees list_t
 * @head: a pointer to the listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
