#include "main.h"

/**
* string_toupper - function that changes all lowercase
* letters of a string to uppercase.
* @str: string to be changed
*
* Return: address to the string
*/

char *string_toupper(char *str)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
