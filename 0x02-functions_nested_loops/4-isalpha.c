#include "main.h"
/**
 * _isalpha - rite a function that checks for alphabetic character.
 * @c: identify between alphabetic characters
 * It is recommended we use the isalpha()
 * function to check whether a character is an alphabet or not.
 * Return: 1 if c is a letter, lowercase or uppercase
 *
 */

int _isalpha(int c)

{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
