#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: The size of the array
 * @c: the character to put the array
 *
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
