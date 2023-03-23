#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
