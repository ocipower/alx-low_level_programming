#include<stdio.h>
/**
  * main - entry point
  * Return: returns 0
  */
int main(void)
{
	int start = 97;
	int stop = 122;
	int i;

	for (i = start; i <= stop; i++)
	{
	if (i == 'e' || i == 'q')
		continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}

