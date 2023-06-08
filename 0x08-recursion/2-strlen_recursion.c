#include "main.h"

/**
 * _strlen_recursion - a funtion that returns the length of a string
 * @s: the string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	length = 1 + _strlen_recursion(0);

	return (length);
}
