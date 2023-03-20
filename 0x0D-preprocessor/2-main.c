#include <stdio.h>

/**
 * main - Print the name of the file compiled
 * from
 * Return: Void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
