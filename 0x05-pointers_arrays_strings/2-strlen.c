#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: String to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
}
