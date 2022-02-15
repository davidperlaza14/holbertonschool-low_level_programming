#include "main.h"
#include <unistd.h>
/**
 * main - Print _putchar followed by a new line
 * Return: Always 0
*/

int main(void)
{

	int i;
	char p[] = "_putchar";
		for (i = 0; i <= 9; i++)
		{
			_putchar(p[i]);
		}
		_putchar('\n');
		return (0);

}
