#include "main.h"
/**
  * _abs - computes the absolute value of an int variable
  * @n: input param
  * Return: returns an int value (success)
  */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

