#include "main.h"

/**
 * _islower - This program checks for a lowercase character
 *@c: The character to be checked
 *Return: 1 for a lowercase character or 0 for otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
