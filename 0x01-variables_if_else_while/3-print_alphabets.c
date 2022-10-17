#include<stdio.h>
/**
  * main - entry point
  * Return: returns 0
  */
int main(void)
{
	int l_start = 97;
	int l_end = 122;
	int u_start = 65;
	int u_end = 90;
	int i;

	for (i = l_start; i <= l_end; i++)
		putchar(i);
	for (i = u_start; i <= u_end; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
