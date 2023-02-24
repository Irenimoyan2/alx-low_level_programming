#include "main.h"
#include <stdio.h>
/**
 * main - largest prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j;
	long int num, prueba, aux = 0, aux2 = 0;

	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		prueba = 0;

		if ((num % i) == 0)
		{
			for (j = 2; j <= i; j++)
			{
				if (!(j == i))
				{
					if ((i % j) == 0)
					{
						prueba = 1;
						break;
					}
				}
			}
			if (prueba == 0)
			{
				aux2 = i;
				if (aux <= aux2)
				{
					aux = aux2;
					num = num / aux;
				}
			}
		}
	}
	printf("%ld\n", aux);
	return (0);
}
