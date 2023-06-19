#include "dog.h"

/**
 * free_dog - free the memory assigned to a dog pointer
 * @d: the dog variable to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
