#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: memory block size
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *david;

	david = malloc(b);
	if (david == NULL)
	{
		exit(98);
	}
	return (david);
}
