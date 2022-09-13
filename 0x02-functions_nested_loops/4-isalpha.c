#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the int character as function argument.
 *
 * Description: checks if alphabet
 * Return : i if true and 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
