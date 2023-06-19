#include "dog.h"

/**
 * new_dog -  allocates and initializes memory for the new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp_dog = 0;

	tmp_dog = malloc(sizeof(dog_t *));
	if (tmp_dog == NULL)
	{
		return (NULL);
	}
	tmp_dog->name = name;
	tmp_dog->age = age;
	tmp_dog->owner = owner;

	return (tmp_dog);
}
