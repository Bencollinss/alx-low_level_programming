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
	char *ptr;

	if (str == 0)
        {
                return (NULL);
        }

	while (str[y])
	{
		y++;
	}

	ptr = malloc(sizeof(char) * (y + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (x < y)
	{
		ptr[x] = ptr[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
