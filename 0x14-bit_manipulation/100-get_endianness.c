#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Entry point
 * Description: Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}

