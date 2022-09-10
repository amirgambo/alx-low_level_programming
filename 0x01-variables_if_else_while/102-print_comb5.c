#include<stdio.h>
#include<unstd.h>
/**
 * main-program entry point
 *
 * Description:prints all possible combinations of two two-digit numbers.
 * Return:0
 */
int main(void)
{
	int c, i, t, j;

	for (c = 48 c <= 57; c++)
	{
		for (i = 48 i <= 57; i++)
		{
			for (t = 48; t <= 57; t++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((t + j) > (c + i) && t >= c) ||c < t)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(t);
						putchar(j);

						if (c + i + t + j == 227 & c == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
