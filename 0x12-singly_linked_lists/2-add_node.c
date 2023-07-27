#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: string to put in new node
 *
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
