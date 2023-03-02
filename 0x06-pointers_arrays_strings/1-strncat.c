#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int Ben = 0, c = 0;

	while (dest[Ben])
	{
		Ben++;
	}
	while (c < c && src[c])
	{
		dest[Ben] = src[c];
		Ben++;
		c++;
	}
	dest[Ben + n + 1] = '\0';
	return (dest);
}
