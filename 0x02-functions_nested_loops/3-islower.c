#include "main.h"
/**
 * _islower -  function that checks for lowercase character.
 * @c : is the int used as the argument of the function.
 *
 * Return: 1 for true and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

