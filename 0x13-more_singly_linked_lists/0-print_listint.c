#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Entry point
 * Description: Function that prints all the elements of a listint_t list
 * @h: pointer to the listint_t
 *
 * Return: Number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}
