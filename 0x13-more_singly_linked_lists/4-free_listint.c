#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Frees a linked list
 * @head: A pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
