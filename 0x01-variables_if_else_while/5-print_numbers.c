#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Description: print all single digit number of base 10
 * starting from 0, follwed bt new line.
 * Return: 0
 */
int main(void)
{
	char c = '0';


	while (c <= '9')
	{
		putcar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
