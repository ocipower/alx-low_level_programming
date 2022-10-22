#include "main.h"
/**
  * print_triangle - print a triangular shape
  * @size: input param
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
			if (size <= 0)
				_putchar('\n');
		}
		for (j = 1; j <= i; j++)
		{	_putchar('#');
		}
		_putchar('\n');
	}
}
