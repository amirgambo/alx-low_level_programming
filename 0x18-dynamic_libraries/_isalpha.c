#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: unsigned int value to be compared with ASCII value
 * author: Amir Gambo Ibrahim
 * Return: 1 if its alphabet and 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
