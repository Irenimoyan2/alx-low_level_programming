#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Entry Point
 * Description:  function that returns the nth node of a dlistint_t linked list
 * @head: pointer to the list
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	{
		return (current);
	}
	current = current->next;
	count++;
	}

	return (NULL);
}
