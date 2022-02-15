#include "main.h"
/**
 *_abs - Compute the obsolute value of an integer
 *@r: Number to check
 *Return: Absolute value r
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
