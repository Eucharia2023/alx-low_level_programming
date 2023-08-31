#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s)
	size_t length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}

return length;
}
