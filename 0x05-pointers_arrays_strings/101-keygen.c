#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int correct_number = 2772, var = 0, ran, ultimo;

	time_t tiempo;

	srand((unsigned) time(&tiempo));

	while ((correct_number - var) > 127)
	{
		ran = rand() % 128;
		printf("%c", ran);
		var = var + ran;
	}
	ultimo = correct_number - var;
	printf("%c", ultimo);
	return (0);
}
