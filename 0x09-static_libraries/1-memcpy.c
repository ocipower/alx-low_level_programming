#include "main.h"

/**
  * _memcpy - copies n byte of data from @src to @dest
  * @src: source from where n byte is copied from
  * @dest: destination to which n byte is copied
  * @n: number of bytes to copy
  * Return: pointer to @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	char *ptr;

	ptr = dest;
	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (ptr);
}

