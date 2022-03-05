#include "main.h"
#include <stdio.h>
/**
 * main - Print all arguments received.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the numbers.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
