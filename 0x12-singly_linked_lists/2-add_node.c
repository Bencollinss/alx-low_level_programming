#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *money;

	if (head != NULL && str != NULL)
	{
		money = malloc(sizeof(list_t));
		if (money == NULL)
			return (NULL);

		money->str = strdup(str);
		money->len = _strlen(str);
		money->next = *head;

		*head = money;

		return (money);
	}
	return (0);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
