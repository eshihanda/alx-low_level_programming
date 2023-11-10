#include "lists.h"

/**
 * sum_dlistint - sume the data in a dlist
 * @head: pointers to current head node
 *
 * Return: sum of the values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
