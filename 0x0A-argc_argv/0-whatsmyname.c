#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument passed into the main as arrays of strings
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
