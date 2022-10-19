#include "main.h"

/**
  * print_alphabet_x10 - print alphabets 10 times
  */

void print_alphabet_x10(void)
{
	int alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
