#include<stdio.h>
/**
  * main - entry point of my program
  * Return: returns 0
  */
int main(void)
{
	int i;
	int max = 10;

	for (i = 0; i < max; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}

