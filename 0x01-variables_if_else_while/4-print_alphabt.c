#include<stdio.h>
#include<unistd.h>
/**
 * main-program entry point
 *
 * Description:print alphabet in lowercase followed by new line
 * Return:0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
i}
