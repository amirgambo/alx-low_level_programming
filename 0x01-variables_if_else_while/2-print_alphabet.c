#include<stdio.h>
#include<unistd.h>
/**
 * main-program entry point
 *
 * Description:This program prints alphabets in lower case.
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
