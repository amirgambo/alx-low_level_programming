#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the int character as function argument.
 *
 * Return : 1 if its a letter and 0 otherwise
 */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
