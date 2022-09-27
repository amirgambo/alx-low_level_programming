#include "main.h"

/**
* _memcpy - copies a memory area
* @dest: memory location to be copied to
* @src: memory location to copied from
* @n: number of bytes to be copied
*
* Return: returns a pointer to the copied memory block
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
