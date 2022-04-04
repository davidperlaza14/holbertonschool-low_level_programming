#include "lists.h"
/**
 *print_listint - Write a function that prints all the elements of a listint_t.
 *@h: is a pointer to the head.
 *Return:  the number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
