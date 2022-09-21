#include "main.h"

/**
* _strncat - concatenate two strings
* @dest: string to added upon
* @src: string to be completed at the end of dest
* @n: int prameter to compare index to
* Return: returns new string after concatenation
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
