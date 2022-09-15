#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Description: print a to z in rivrse order
 * starting from z to a
 * Return: 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
