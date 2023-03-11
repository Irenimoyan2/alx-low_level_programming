#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument passed into the main as arrays of string
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
	return (0);
}

