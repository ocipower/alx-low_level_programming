#include "main.h"
#include <stddef.h>

/**
  * _strchr - searches for the first occurence of a racter
  * @s: pointer to  buffer holding character to be sort for
  * @c: racter to be sort for
  * Return: returns a pointer to the racter soretd for
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
