#include<stdio.h>
#include<unistd.h>
/**
 * main-program entry point
 *
 * Description:prints all numbers of base 16
 * in lowercase
 * Return:0 (Success)
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
