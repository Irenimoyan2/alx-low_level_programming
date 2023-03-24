#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers of all parameters inserted followed by ,
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param_list;

	unsigned int x;

	va_start(param_list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(param_list, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param_list);
}

