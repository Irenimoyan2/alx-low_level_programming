#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Entry point
 * Description: Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to be changed
 * @index: The index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;
	unsigned long int max = 1;

	/* To validate if the index is not out of range */
	bits = (sizeof(unsigned long int) * 8);
	if (index > bits)
		return (-1);

	/* To create mask with 0 at index */
	max = ~(max << index);
	*n = (*n & max);

	return (1);
}
