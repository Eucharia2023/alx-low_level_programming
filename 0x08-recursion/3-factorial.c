#include "main.h"

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
}
