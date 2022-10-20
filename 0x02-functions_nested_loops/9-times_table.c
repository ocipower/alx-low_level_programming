#include "main.h"
/**
  * void times_table - prints 9 times table
  */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('*');
		_putchar(9 + '0');
	}
	_putchar(i + '0');
}
