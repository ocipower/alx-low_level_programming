#include "main.h"
/**
  * _isalpha - evaluates a to see if a character is an alphabet
  * @c: input param
  * Return: 1 (success)
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

