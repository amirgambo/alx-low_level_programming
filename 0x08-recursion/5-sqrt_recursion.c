#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be used
 * Return: return the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - return the square root of a number
 * @n: test number
 * @i: the squared number
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
