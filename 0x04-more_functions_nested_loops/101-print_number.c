#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer.
 * @n: print number
 * return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
		putchar('0');

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
