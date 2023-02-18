#include <stdio.h>

/**
 * main - print lowercase and uppercase a-zA-Z using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'b';

	while (lower <= 'z') /*print lowercases  a-z*/
	{
		putchar(lower);
		lower++;
	}

	while(upper <= 'Z') /*prints uppercases A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
