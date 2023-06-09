#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the start of a list
 * @head: head of the linked list
 * @str: string to store the list
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *c;
	unsigned int len = 0;
	list_t *current;

	while (str[len])
		len++;
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	c = strdup(str);
	if (c == NULL)
	{
		free(current);
		return (NULL);
	}
	current->str = c;
	current->len = len;
	current->next = *head;
	*head = current;

	return (current);
}

