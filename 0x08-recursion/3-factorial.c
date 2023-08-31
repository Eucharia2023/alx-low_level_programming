#include "main.h"
<<<<<<< HEAD

/**
 * factorial - return the factorial of a given number
 *
 * return: factorial of a number
 */
int factorial(int n)
{
        if (n == 0)
                return (1);
	else (n < 0)
		return (-1);
	return (n * factorial (n- 1));
=======
/**
 * factorial- print the factorial of a number
 * @n:factor to get factroial
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
>>>>>>> ecf7bf8c5b77711fe4ee2de8b3e20a955172e89e
}
