#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0
  */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
		if (d == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

