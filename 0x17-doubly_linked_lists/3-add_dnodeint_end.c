#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head address
 * @n: new node data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = new;
		new->prev = current;
	}
	return (new);
}
