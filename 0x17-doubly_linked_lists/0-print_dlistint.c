#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Entry Point
 * Description: Function that prints all the elements of a dlistint_t list
 * @h: Pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	/* Counter to keep track of the number of nodes */
	size_t count = 0;
	/* Iterate through the list */
	while (node)
	{
		/* Print the value of the current node */
		printf("%i\n", node->n);
		/* Increment the counter */
		count++;
		/* Move to the next node */
		node = node->next;
	}
	return (count);
}
