#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * _calloc - Allocate memory for an array.
 * @nmemb: elements of the array.
 * @size:  size of the array.
 * Return: *palloc on success, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *stiven;
	unsigned int counter = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	stiven = malloc(size * nmemb);
	if (stiven == NULL)
		return (NULL);

	while (counter < (size * nmemb))
	{
		stiven[counter] = 0;
		counter++;
	}
	return (stiven);
}
