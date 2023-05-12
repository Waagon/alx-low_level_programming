#include "main.h"
/**
  * _strpbrk - functions that searches a string for any set of bytes
  * @s: input
  * @accept: input
  * Return: Always 0(Success)
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*s == accept[j])
		return (s);
		}
	s++;
	}

	return ('\0');
}
