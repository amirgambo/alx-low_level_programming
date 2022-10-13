#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers -  function that print numbers,
*@separator: separator is the string to be printed between numbers
*@n: number of arguments passed
*Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(number);
	printf("\n");
}
