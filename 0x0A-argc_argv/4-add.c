#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
/**
 * _argv - Evaluate *argv for special characters.
 * @s: string input.
 * Return: string evaluated.

int _argv(char *s)
{
	if (!isdigit(*s))
		return (*s++);
	printf("Error\n");
	return (1);
}

 * main - Adds positive numbers.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the add, 1 for error.

int main(int argc, char *argv[])
{
	int c, add = 0;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			if (atoi(argv[c]))
				add += atoi(argv[c]);
			else if (!isdigit(*argv[c]))
				return (_argv(*argv));
			add += atoi(argv[c]);
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
*/
