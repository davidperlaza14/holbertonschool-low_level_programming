#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *d, s, p;

	if (min > max)
		return (NULL);

	d = (int *) malloc((max - min + 1) * sizeof(int));
	if (!d)
		return (NULL);
	for (p = min, s = 0; p <= max; s++, p++)
		d[s] = p;

	return (d);
}
