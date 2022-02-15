#include "main.h"
/**
 * It is recommended we use the isalpha() function to check whether a character is an alphabet or not.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c)

{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return 1;
	}

         	return 0;

}
