#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Name of the source file: %s\n", __FILE__);
	return (0);
}
