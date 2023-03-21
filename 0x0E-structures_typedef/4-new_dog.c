#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: name of the  dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggi;
	int name_1 = 0, own_1 = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		doggi = malloc(sizeof(dog_t));

		if (doggi == NULL)
			return (NULL);

		doggi->name = malloc(sizeof(char) * name_1);

		if (doggi->name == NULL)
		{
			free(doggi);
			return (NULL);
		}

		doggi->owner = malloc(sizeof(char) * own_1);

		if (doggi->owner == NULL)
		{
			free(doggi->name);
			free(doggi);
			return (NULL);
		}

		doggi->name = _strcpy(doggi->name, name);
		doggi->owner = _strcpy(doggi->owner, owner);
		doggi->age = age;
	}
	return (doggi);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}