#include "main.h"
/**
*jack_bauer - is a fuction to prints last digit of a number.
*minutos is a conter
*horas is a conter
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int h, m, hi, hd, mi, md;

	for (h = 0; h < 24; h++)
	{
		hi = h / 10;
		hd = h % 10;
		for (m = 0; m < 60; m++)
		{
			mi = m / 10;
			md = m % 10;
			_putchar('0' + hi);
			_putchar('0' + hd);
			_putchar(':');
			_putchar('0' + mi);
			_putchar('0' + md);
			_putchar('\n');
		}
	}
}
