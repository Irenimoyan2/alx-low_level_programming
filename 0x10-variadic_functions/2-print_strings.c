#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings passed in arguments
 * @separator: string to be printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param_list;
	unsigned int x;
	char *string;

	va_start(param_list, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(param_list, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param_list);
}
