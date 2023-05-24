#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry Point
 * Description: function that inserts a new node at a given position.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int index, count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;


	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}


	index = idx - 1;
	while (current && count != index)
	{
		count++;
		current = current->next;
	}


	if (count == index && current)
	{
		new_node->prev = current;
		new_node->next = current->next;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
