#include "lists.h"

/**
 * list_len - function return the number of elements
 * @h: number elements
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
