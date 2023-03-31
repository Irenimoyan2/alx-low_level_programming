#include "lists.h"
#include <stdio.h>

/**
 * print_list - Write a function that prints all the elements of a list_t list
 * @h: pointer to the list_t
 *
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
