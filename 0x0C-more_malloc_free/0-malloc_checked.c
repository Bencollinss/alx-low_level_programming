#include "main.h"

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);

	if (g == NULL)
		exit(98);

	return (g);
}
