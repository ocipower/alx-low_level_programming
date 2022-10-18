#include<stdio.h>
/**
  * main - enrty point
  * Return: returns 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
