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
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];

return (dest);
}
