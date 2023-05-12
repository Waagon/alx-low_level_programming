#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: The character to be checked
  * Return: 1 if c is a letter, 0 if it is not
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
