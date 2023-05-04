#include "main.h"

/**
  * reverse_array - reverses an array of integers
  * @a: array
  * @n: number of elementss of the array
  * Return: rev
  */
void reverse_array(int *a, int n)
{
	int k;
	int l;

	for (k = 0; k < n; k++)
	{
		n--;
		l = a[k];
		a[k] = a[n];
		a[n] = l;
	}
}
