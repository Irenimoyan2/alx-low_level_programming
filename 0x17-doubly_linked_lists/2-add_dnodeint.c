#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Entry Point
 * Description: function that adds a new node at the beginning
 * @head: pointer to the first element of the list
 * @n: int to set in the new node.
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign the value n to the n member of the new node */
	new_node->n = n;

	/* Update the prev and next pointers of the new node*/
	new_node->prev = NULL;
	new_node->next = *head;

	/* update prev pointer of the old head node if it exists */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
