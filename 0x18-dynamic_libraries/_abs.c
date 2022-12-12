#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The int to be operated upon
 * author: Amir Gambo Ibrahim
 * Return: returns an unsinged int value.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
