#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Entry Point.
 * Description: function that gives you the index of a key.
 * @key: The key to get the index of.
 * @size: The size of an array of hash table
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
