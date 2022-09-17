#include "main.h"
/**
 * __islower - function to check for lower case caractor
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return(0);
}
