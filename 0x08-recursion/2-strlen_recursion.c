#include "main.h"
/**
 * _strlen_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 * Return: number of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
