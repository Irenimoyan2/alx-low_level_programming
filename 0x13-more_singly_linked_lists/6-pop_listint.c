#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Entry head
 * Description: function that deletes the head node of a listint_t linked list
 * @head: Pointer to pointer to the head node of the list
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *p_node;
	listint_t *tmp;

	if (head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	p_node = tmp;
	*head = tmp->next;
	p_node->next = NULL;

	free(tmp);
	return (p_node->n);
}









