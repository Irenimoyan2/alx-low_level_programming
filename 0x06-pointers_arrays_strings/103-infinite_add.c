#include "main.h"
/**
 * infinite_add - prints the add of two numbers
 * @n1: input string value 1
 * @n2: input string value 2
 * @r:buffer
 * @size_r: size of buffer
 * Return: number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int cont1 = 0, cont2 = 0, grande, c = 0;
	int sum, aux, val1, val2;

	while (*(n1 + cont1) != '\0')
		cont1++;
	while (*(n2 + cont2) != '\0')
		cont2++;
	if (cont1 > cont2)
		grande = cont1;
	else
		grande = cont2;
	r[grande + 1] = '\0';
	aux = grande;
	while (grande >= 0)
	{
		if (cont1 > 0)
			val1 = (n1[cont1 - 1]) - '0';
		else
			val1 = 0;
		if (cont2 > 0)
			val2 = (n2[cont2 - 1]) - '0';
		else
			val2 = 0;
		sum = (val1 + val2 + c) % 10;
		c = (val1 + val2 + c) / 10;
		r[grande] = sum + '0';
		grande--;
		cont1--;
		cont2--;
	}
	if ((size_r - 1) <= aux)
	{ return (0);
	}
	else
	{
		if (*(r + 0) == '0')
			return (r + 1);
		else
			return (r);
	}
}
