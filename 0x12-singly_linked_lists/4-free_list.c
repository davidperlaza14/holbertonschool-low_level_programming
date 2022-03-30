#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: memory location
 */
void free_list(list_t *head)
{


	while (head != NULL)
	{

		head(head->str);
		free(head);
		head = head->next;

	}

}
