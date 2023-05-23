#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry Point
 * Description: function that deletes the node at index index of a dlistint_t
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int count = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (current && count != idx)
	{
		count++;
		current = current->next;
	}

	/* general case */
	if (count == idx && current)
	{
		node_to_delete = current->next;
		if (node_to_delete->next)
		node_to_delete->next->prev = current;
		current->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
