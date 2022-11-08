#include "main.h"

/**
 * _strlen - prints string lenght
 * @s: param to calculate input lenght
 * Return: return lenght of string on success
 */
int _strlen(char *s)
{

	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
