#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format of the input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list param_list;
	char *separator, *str;
	int x;

	separator = "";
	x = 0;

	va_start(param_list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(param_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(param_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(param_list, double));
					break;
				case 's':
					str = va_arg(param_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(param_list);
}
