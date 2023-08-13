#include <stdio.h>
/**
 * main - print the alphabet in lower case
 *
 * return 0 (success)
*/
int main(void)
{
	/**
	 * main - print the alphabet in lower case
	 *
	 * return 0 (success)
	*/
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		putchar(ch);
		}
	putchar("\n"); /*Print a newline after printing the alphabet*/
	return (0); /*indicate sucess*/
}
