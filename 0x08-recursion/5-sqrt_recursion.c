#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be used
 * Return: return the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
                return (n);
        return (_sqrt(0, n));
}

/**
 * _sqrt - return the square root of a number
 * @n: test number
 * @i: the squared number
 * Return: the square root of n
 */

int _sqrt(int n, int i)
{
        if (n > i / 2)
                return (-1);
        else if (n * n == i)
                return (n);
        return (_sqrt(n + 1, i));
}
