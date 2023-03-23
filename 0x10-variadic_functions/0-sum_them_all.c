#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add alll numbers of parameters
 * @n: number of parameters passed
 * @...: number which will be added
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param_list;
	unsigned int x, sum;

	sum = 0;

	va_start(param_list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(param_list, int);
	va_end(param_list);
	return (sum);
}
