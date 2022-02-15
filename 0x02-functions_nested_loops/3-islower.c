#include "main.h"
/**
 *funcion _islower - para recorrer los caracteres (opperlower)
 *Return : 1 por cada opperlower caraecter, 0 si otro caracter.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}else
	{
		return 0;
	}
	_putchar('\n');
}
