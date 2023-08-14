#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that prints random no and giving info abt it
 *
 * Return: always (0)
 *
*/
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = 0 % 10;
	printf("Last digit of %d ", n);
	if (lastd > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
