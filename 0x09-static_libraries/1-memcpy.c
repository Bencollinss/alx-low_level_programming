#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: The memory area
 * @src: The source memory area
 * @n: bytes from memory area to copy
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
