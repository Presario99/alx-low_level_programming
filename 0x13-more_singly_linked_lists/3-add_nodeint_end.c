#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	ptr = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (NULL);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = end;

	return (end);
}