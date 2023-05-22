#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- Entry Point
 * Description: Function that prints all the elements of a dlistint_t list
 * @h: Pointer to the list.
 * Return: number of nodes.
 **/

size_t print_dlistint(const dlistint_t *h)
{
	/* Counter to keep track of the number of nodes */
	size_t count = 0;
	
	/* Iterate through the list */
	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%i\n", h->n);
		
		/* Move to the next node */
		h = h->next;
		
		/* Increment the counter */
		count++;
	}
	
	return (count);
}
