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
	size_t count = 0;
	list_t *current;
	
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	current->len = count;
	current->next = *head;
	*head = current;

	return (current);
}

