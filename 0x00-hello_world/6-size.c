#include<stdio.h>
/**
 * main-entry point to every c program
 *
 * Return: 0 as always for a successful program
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char:%d byte(s)\n", sizeof(a));
	printf("Size of int:%d byte(s)\n", sizeof(b));
	printf("Size of long int:%d byte(s)\n", sizeof(c));
	printf("Size of long long int:%d byte(s)\n", sizeof(d));
	printf("Size of float:%d byte(s)\n", sizeof(e));
	return (0);
}
