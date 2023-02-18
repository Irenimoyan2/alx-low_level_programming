#include <stdio.h>

/**
 *main - print lowercase alpha a-z and remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		apha++;
	}
	putchar('\n');

	return (0);
}
