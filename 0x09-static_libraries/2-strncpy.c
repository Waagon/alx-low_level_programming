#include "main.h"

/**
  * _strncpy - copys a string with n
  * @dest: copy to
  * @src: copy from
  * @n: number of char to be copied
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
		while (l < n && src[l] != '\0')
		{
			dest[l] = src[l];
			l++;
		}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}

