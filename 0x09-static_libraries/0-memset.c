#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: memeory pointer to write into
  * @b: constant byte to be written inot @s
  * @n: number byte to write
  * Return: a character pointer to @s;
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;
	char *ptr;

	ptr = s;
	for (counter = 0; counter < n; counter++)
		s[counter] = b;
	return (ptr);
}
