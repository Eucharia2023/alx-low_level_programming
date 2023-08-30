#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string followed by a new line
 * @s: string
 * Return: Always 0
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	if (*s != '\n')
	putchar(*s);
}
