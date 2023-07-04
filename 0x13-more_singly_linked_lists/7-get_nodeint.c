#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - checks a given node
 *@head: pointer to the first node
 *@index: the node index to locate
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
