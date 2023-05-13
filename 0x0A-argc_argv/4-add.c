#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - a program that adds positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int j;
	unsigned int l, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			e = argv[j];

			for (l = 0; l < strlen(e); l++)
			{
				if (e[l] < 48 || e[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
