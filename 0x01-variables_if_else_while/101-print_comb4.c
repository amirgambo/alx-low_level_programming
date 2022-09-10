#include<stdio.h>
/**
 * main-program entry point
 *
 * Description:prints all possible combinations of three digits
 * Return:0
 */
int main(void)
{
	int c, i, t;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if (c < i && i < t)
				{
					putchar(c);
					putchar(i);
					putchar(t);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
