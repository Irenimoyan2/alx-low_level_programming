#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the differrence of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of number
 * @a: first number
 * @b: second number
 *
 * Return: return the modulus of number
 */

int op_mod(int a, int b)
{
	return (a % b);
}
