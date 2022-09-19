#include "main.h"
#include<string.h>

/**
* puts_half- prints half of a string
* @str:string to be printed
* Return: return nothing
*/

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
