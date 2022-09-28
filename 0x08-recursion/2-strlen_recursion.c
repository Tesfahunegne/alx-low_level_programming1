#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		 _strlen_recursion(s + 1);
		 n++;
	}
	return (n);
}
