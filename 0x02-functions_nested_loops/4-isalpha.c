#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: integer value in the program
 * Description: checks if its an alphabet
 * Return: 1 if true. 0 if false.
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
