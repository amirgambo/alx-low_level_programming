#include<stdio.h>
/**
 * main-the program's main entry point
 *
 * Return: Always 0 if there is no error
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of char:%d byte(s)\n", sizeof(c));
	printf("Size of int:%d byte(s)\n", sizeof(i));
	printf("Size of long int:%d byte(s)\n", sizeof(li));
	printf("Size of long long int:%d byte(s)\n", sizeof(lli));
	printf("Size of float:%d byte(s)\n", sizeof(f));
	return (0);
}
	
