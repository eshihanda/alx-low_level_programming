#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the first node
 * @head: pointer to the the head of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}
