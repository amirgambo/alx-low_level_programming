#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - function that adds 2 numbers
*@a: first number
*@b: second number
*Return: result from addition of the numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function that substract 2 numbers
*@a: first number
*@b: second number
*Return: result from substraction of the numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function that multiply 2 numbers
*@a: first number
*@b: second number
*Return: the result from multiply\ication of the numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that divides 2 numbers
*@a: first number
*@b: second number
*Return: the result from the division of the numbers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - function that gets the remainder from the division of 2 numbers.
*@a: first number
*@b: second number
*Return: the remainder of the division of the numbers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
