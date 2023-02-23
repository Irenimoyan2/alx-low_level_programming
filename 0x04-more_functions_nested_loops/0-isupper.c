#include "main.h"

/**
 * _supper - uppercase letters
 * @c: char to check
 *
 * Return: Always or 1
 */

int _isupper(int c);
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
