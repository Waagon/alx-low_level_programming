#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - a function that concatenates two strings
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0, o = 0, p = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[n])
		n++;

	p = m + n;
	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	while (o < p)
	{
		if (o <= m)
			s[o] = s1[o];

		if (o >= m)
		{
			s[o] = s2[n];
			n++;
		}

		o++;
	}

	s[o] = '\0';
	return (s);
}
