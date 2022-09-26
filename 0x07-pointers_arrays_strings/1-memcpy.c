#include "main.h"

/**
* _memcpy - function that copies memory area.
* @dest: destination to write to
* @src: source to copy from
* @n: number of bytes to write
*
* Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;
	return (dest);
}
