#include "main.h"
#include <stdio.h>

/** _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int Ben = 0; i;

	while (dest[Ben])
	{
		Ben++;
	}
	for (i = 0;src[i] != 0; i++)
	{
		dest[Ben] = src[i];
	}
	dest[Ben] = '\0';
	return (dest);
}

