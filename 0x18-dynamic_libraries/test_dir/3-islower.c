#include "main.h"

/**
  * _islower - checks if a an alphabet is lower case
  * @c: input param
  * Return: returns 1 (success)
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


