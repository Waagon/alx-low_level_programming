#include <stdio.h>
#include "main.h"

/**
  * main - prints its name
  * @argc: number of argument
  * @argv: array of argument
  *
  * Retun: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
