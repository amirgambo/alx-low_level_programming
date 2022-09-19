#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: String to print
* Return: return nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(len + s));
	putchar(10);
}
