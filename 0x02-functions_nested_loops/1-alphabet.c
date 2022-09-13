#include "main.h"

/**
 * main- program entry point.
 *
 * Description: function that prints the alphabet, in lowercase,
 * Return: always 0(success)
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}

