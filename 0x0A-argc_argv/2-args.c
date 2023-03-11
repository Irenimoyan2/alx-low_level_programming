#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 * @argc: arguments count
 * @argv: argument passed into the main as arrays of string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
