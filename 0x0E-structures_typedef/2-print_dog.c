#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the data of a dog
 * @d: the dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s/n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->name : 0);
		printf("Owner: %s\n", (d->age) ? d->owner : "(nil)");
	}
}
