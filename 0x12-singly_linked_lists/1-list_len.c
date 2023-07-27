#include "lists.h"
#include <stdlib.h>

/*
 * list_len - returns the number of elemenys in a linked list
 * @h: pointer to list_t list
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
