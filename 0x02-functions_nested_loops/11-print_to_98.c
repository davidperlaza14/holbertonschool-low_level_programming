#include "main.n"
#include <stdio.h>
/**
 *print_to_98 - Print numbers of 0 at 98
 *@n: Input to calculate
 *Return: List result
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
