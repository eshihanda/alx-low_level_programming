#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -return sum of all data
 * @head: pointer to first node
 *
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

