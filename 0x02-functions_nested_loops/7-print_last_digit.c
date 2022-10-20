#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @n: input param
  * Return: returns the value of the last digit
  */

int print_last_digit(int n)
{
	int lvalue;

	lvalue = n % 10;
	if (lvalue < 0)
		lvalue *= -1;
	_putchar(lvalue + '0');
	return (lvalue % 10);
}
