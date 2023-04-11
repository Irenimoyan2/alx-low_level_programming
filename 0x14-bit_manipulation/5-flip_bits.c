#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Entry point
 * Description: Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int bits;
	unsigned long int max_bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bits = max_bits >> i;
		if (bits & 1)
			count++;
	}

	return (count);
}

