#include "main.hi"
/**
 *_strlen_recursion - print length of string
 *@s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
