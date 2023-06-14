#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: The string to copy
 *
 * Return: NULL if str is 0
 */
char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *ptr = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
		y++;
	ptr = malloc(sizeof(char) * (y + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (x < y)
	{
		ptr[x] = str[x];
		x++;
	}
	ptr[x] = '\0';

	return (ptr);
}
