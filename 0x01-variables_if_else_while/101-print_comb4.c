#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *
  *Return: Always 0
  */

int main(void)
{
	int c, r, t;

	for (c = '0'; c < '9'; c++)
	{
		for (r = r + 1; t <= '9'; t++)
		{
			for (t = c + 1; r <= '9'; r++)
			{
				if ((r != c) != t)
				{
					putchar(c);
					putchar(r);
					putchar(t);
					if (c == '7' && r == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
