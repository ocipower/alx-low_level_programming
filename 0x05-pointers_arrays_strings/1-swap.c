#include "main.h"

/**
 * swap_int - swaps the value of two variables
 * @a: param to be swapped
 * @b: param to be swapped
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
