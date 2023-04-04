#include "lists.h"

/**
  * free_listint2 - ...
  * @head: ...
  *
  * Return: ...
  */
void free_listint2(listint_t **head)
{
	listint_t *bobby;

	if (head)
	{
		while (*head)
		{
			bobby = (*head);
			*head = (*head)->next;
			free(bobby);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = NULL;
}
