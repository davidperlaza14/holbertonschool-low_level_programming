#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: Pointer char str
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
