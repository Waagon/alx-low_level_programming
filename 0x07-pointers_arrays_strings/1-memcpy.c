#include "main.h"
/**
  * _memcpy - functions that copies memory area
  * @dest: memory where is stored
  * @src: memory where is copied
  * @n: number of bytes
  *
  * Return: copied memory with n byte changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
