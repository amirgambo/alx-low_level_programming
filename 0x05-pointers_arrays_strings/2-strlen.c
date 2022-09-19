#include "main.h"

/**
* _strlen(char *s)- returns the length of a string.
* @s: string as the parameter
* Return: returns an integer as len
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
