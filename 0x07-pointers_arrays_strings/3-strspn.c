#include "main.h"

/**
  * _strchr - searches for the first occurence of a racter
  * @s: pointer to  buffer holding character to be sort for
  * @c: racter to be sort for
  * Return: returns a pointer to the racter soretd for
  */

#include<stdio.h>

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
