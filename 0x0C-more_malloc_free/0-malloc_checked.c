#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: argument provided
 * Return: returns a pointer to the array
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
