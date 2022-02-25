#include "main.h"
/**
 * reverse_array - Reverse the content of an array.
 * @a: Input of the string.
 * @n: Lengh of the string.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int*p = a; /*Apunta a la cadena*/
	int c = 0; /*inicio*/
	int temp; /* Posicion temporal*/

	n--;/*no null*/
	while (c < n)
	{
		temp = *(p + c);
		*(p + c) = *(p + n);
		*(p + n) = temp;
		c++;
		n--;/*decrementa la posicion*/
	}
}
