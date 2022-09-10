#include<stdio.h>
#include<unistd.h>
/**
 * main-program entry point
 *
 * Description:to print all single digit numbers of base 10
 * starting from 0
 * Return:0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
