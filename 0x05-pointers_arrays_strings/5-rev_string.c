#include "main.h"

/**
* rev_string- reversing a string
* @s: as a parameter
* Return: always 0 for success
*/

void rev_string(char *s)
{
	char tmp = s[0];
	int i, length = 0;

	while (s[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
	{
		length--;
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
	}
}

