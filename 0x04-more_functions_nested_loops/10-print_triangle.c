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
		for (j = i; j <= size; j++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			_putchar('#');
		}
		_putchar('\n');
	}
}
