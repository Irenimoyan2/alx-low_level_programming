#include <stdio.h>
#include "main.h"

/**
 * get_bit - Entry point
 * Description: Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
