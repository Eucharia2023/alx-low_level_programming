#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
 * main - Program that prints random number
 *
 * Return: 0 (sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n;
	printf("Last digit of %d ", n);
	if (lastDigit > 5)
	{
		printf("greater than 5\n", n);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", n);
	}
	else if (lastDigit < 6) && ! 0))
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
