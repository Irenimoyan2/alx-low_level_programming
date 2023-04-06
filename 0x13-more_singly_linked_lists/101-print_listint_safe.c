#include "lists.h"

/**
 * print_listint_safe - Entry point
 * Description: Prints a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *vet;
	size_t count = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	/* Traverse the linke list */
	current = head;
	while (current)
	{
		/* Print current node */
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		/* Break loop if next pointer points to previous node */
		if (current > current->next)
		{
			current = current->next;
		}
		else
		{
			vet = current->next;
			printf("-> [%p] %d\n", (void *)vet, vet->n);
			break;
		}
	}
	return (count);
}
