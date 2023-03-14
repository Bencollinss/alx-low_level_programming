#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the number of argument passed on it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
