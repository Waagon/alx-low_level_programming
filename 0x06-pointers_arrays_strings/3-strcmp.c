#include "main.h"

/**
  * _strcmp - compares two strings values
  * @s1: string 1
  * @s2: string 2
  * Return: the difference in s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	k++;
	}
	return (0);
}
