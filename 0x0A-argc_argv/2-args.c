#include "main.h"

/**
 * main - A program that prints all argument passed to it
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argc[x]);
	}
	return (0);
}
