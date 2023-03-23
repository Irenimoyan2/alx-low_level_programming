#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each element on new line
 * @array : array entered
 * @size: number of elements to be printed
 * @action: pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
