#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Entry code
 * Description: function that returns the number of elements
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	/* Counter to keep track of the number of nodes */
	size_t count = 0;

	while (node)
	{
		/* Increment the counter */
		count++;
		/* Move to the next node */
		node = node->next;
	}

	return (count);
}
