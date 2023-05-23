#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Entry Point
 * Description: function that returns the sum of all the data (n)
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
