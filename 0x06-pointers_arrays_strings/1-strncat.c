#include "main.h"

/**
  * _strncat - joins two strings with n bytes
  * @dest: copy to
  * @src: copy from
  * @n: number of char to be copied
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
