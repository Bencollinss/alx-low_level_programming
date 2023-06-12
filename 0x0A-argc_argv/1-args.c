#include "main.h"

/**
 * main - A program that prints number of args passed to it
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv[];
	printf("%d\n", argc - 1);
	return (0);
}
