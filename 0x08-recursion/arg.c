#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	int counter;
	int sum;

	sum = 0;

	for (counter = 0; counter < argc; counter++)
	{
		if ( argc > 1)
			sum = sum + atoi(argv[counter]);
		else
			printf("HEY! programmer: u enetred less arguement\n");
	}
	printf("%d\n", sum);
	return (0);
}



