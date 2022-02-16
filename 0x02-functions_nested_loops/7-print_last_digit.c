#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @r: Number to check
 * Return: Last digit
*/

int print_last_digit(int r)
{
	int d, p = r % 10;

	if (p < 0)
	{
		d = (p * -1);
		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar(p + '0');
		return (f);
	}
}
