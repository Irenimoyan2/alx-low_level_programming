#include "main.h"
#include <stdio.h>

/**
 * factorial - Entry
 * Description: Write a function that returns the factorial of a given number
 * @n: number  of  factorial
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n + 1));
}
