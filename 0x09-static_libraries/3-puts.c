#include<stdio.h>
#include "main.h"

/**
* _puts - function that prints a string
* @str: string to print
* Description: To print a string
* Return: no error for success
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
