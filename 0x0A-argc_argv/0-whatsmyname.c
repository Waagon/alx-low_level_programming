#include <stdio.h>
#include "main.h"

/**
  * main - prints its name
  * @argc: number of argument
  * @argv: array of argument
  *
  * Retun: Always 0 (Success)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
