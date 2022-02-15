#include "main.h"
#include <unistd.h>
//#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.*/

 int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main()
{

	int i;
	char p[] = "_putchar";
		for( i = 0; i <9 ; i++)
		{
			_putchar(p[i]);
		}
		_putchar('\n');


/**
	_putchar ('_');
	_putchar ('p');
	_putchar ('u');
	_putchar ('t');
	_putchar ('c');
	_putchar ('h');
	_putchar ('a');
	_putchar ('r');
*/
	_putchar ('\n');

	return 0;

}
