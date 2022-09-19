#include "main.h"

/**
* _strcpy - Copies and paste string
* @dest: to the destination
* @src: from source
*
* Return: the pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
