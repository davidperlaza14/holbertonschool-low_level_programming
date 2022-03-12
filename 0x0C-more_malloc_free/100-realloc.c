#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space fot ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: new pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_prt;
	char *cp_ptr, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free (ptr);
		return (NULL);
	}

	if (!ptr)
	{
		ptr = malloc(new_size);
		copy[i] = *cp_ptr++;

		free(ptr);
		return (new_size);
	}
}
