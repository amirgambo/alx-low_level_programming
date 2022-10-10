#include "main.h"
/**
 * main - entry point
 * Description: prints _putchar
 * Return: 0 as always
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

