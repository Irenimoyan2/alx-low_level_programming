#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Entry Point
 * Description: Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *content = *head;
	unsigned int node;

	if (content == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(content);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (content->next == NULL)
			return (-1);

		content = content->next;
	}

	temp = content->next;
	content->next = temp->next;
	free(temp);
	return (1);
}
