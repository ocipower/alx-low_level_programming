#include<stdio.h>
/**
  * main - entry point
  * Return: returns 0 0n exit of success
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
