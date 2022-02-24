#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat -the strcat() function is used to concatenate two strings.
 *@dest: This is pointer to the destination array,
 *@src:is the string to be appended.This should not overlap the destination
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
		*p++ = *src++;

	return (dest);
}
