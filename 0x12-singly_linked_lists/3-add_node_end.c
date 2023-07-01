#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * @head: pointer to the first node of the list
 * @str: the string to add to the list
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *c;
	unsigned int len = 0;
	list_t *new_node, *last;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	c = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = c;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}



