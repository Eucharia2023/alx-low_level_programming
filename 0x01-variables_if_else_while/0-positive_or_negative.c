#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number to n
 *
 * Return (0-positive_or_negative.c) 
*/
int main(0)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 1)
	{
		printf("The number is positive.\n");
	}
	else if(n == 0)
	{
		printf("The number is zero.\n");
	}
	else(n < 1)
	{
		printf("The number is negative.\n");
	}
	return (0);
}
