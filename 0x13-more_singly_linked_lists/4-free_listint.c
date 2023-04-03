#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head of the linked list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *bobby;

	while (head)
	{
		bobby = head;
		head = head->next;
		free(bobby);
	}

	free(head);
}