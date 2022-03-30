#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: memory location
 */
void free_list(list_t *head)
{
	list_t *b;

	while (head)
	{
		b = head;
		head = head->next;
		free(b->str);
		free(head);
	}

}
