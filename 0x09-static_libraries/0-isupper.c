#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @z: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int z)
{
	if (z >= 65 && z <= 90)
	{
		return (1);
	}

	return (0);
}
