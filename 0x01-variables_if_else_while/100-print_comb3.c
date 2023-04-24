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
	int c, r;

	for (c = '0'; c < '9'; c++)
	{
		for (r = c + 1; r <= '9'; r++)
		{
			if (r != c)
			{
				putchar(c);
				putchar(r);

				if (c == '8' && r == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
