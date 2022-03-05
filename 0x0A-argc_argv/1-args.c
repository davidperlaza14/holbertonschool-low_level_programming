#include "main.h"
#include <stdio.h>
/**
 * main - Print the number of arguments.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the numbers.
 */


int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc);

	while (i < argc)
	{
		printf("%i \" %s\"\n", i, argv[i]);
		i++;
	}
	return (0);
}
