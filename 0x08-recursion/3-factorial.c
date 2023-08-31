#include "main.h"
/**
 * factorial- print the factorial of a number
 * @n - int 
 * Return: The factorial of a number as an int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
