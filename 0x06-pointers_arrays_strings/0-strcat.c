#include "main.h"

/**
* _strcat - function to concatenate the string pointed to by @src to
* the end of the string pointed to by @dest
* @dest: string that will be added
* @src: string that will be concatenated to
*
* Return: return the pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
