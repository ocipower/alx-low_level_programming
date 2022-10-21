#include "main.h"
/**
  * more_numbers -  prints 10 times the numbers, from 0 to 14
  */

void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			_putchar(col);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
