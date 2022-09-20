#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is a main function
 *
 * Description: print base 10 and  a to f
 * Return: 0
 */
int main(void)
{
	char q = '0';
	char z = 'a';

	while (q <= '9')
	{
		putchar(q);
		q++;
	}
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
