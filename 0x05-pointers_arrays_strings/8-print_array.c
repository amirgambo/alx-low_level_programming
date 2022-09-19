#include<stdio.h>
#include "main.h"

/**
* print_array - prints n element of array
* @a: array pointer
* @n: number of elements in the array
* Return: return nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar(10);
}
