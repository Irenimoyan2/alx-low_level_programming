#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Entry point
 * Description: function that deletes the head node of a listint_t linked list
 * @head: pointer to  pointer to the head node of the list
 *
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int content;

	if (!*head)
	{
		return (0);
	}

	temp = *head;
	content = temp->n;
	*head = (*head)->next;

	free(temp);

	return (content);
}
