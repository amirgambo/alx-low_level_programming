#include "main.h"

/**
 *array_range - creates array of integers
 *@min:minimum integer
 *@max:maximum integer
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, x, total;
	
	if (min > max)
		return (NULL);
	
	total = max - min;
	
	ar = malloc((total + 1) * sizeof(int));
	
	if (ar == NULL)
		return (NULL);
	
	for (i = 0, x = min; x <= max; x++, i++)
		ar[i] = x;
	
	return (ar);
}
