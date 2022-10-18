#include<stdio.h>
/**
  * main - entry point
  * Return: return 0
  */
int main(void)
{
	int start = 122;
	int stop = 97;
	int i = 0;

	for (i = start; i >= stop; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
