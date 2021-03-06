#include "main.h"
/**
 * print_binary - Print the binary number of an integer.
 * @n: integer to print.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
/* Right Shift ">>" divides "n" by 2 and moves bit value 1 position */
		if (n >> 1)
			print_binary(n >> 1);
		/* Print using recursion */
		putchar ((n & 1) + '0');
	}
	else
		putchar('0');
}
