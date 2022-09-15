#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - main function
 *
 * Description: print base 10 and  a to f
 * Return: 0
 */
int main(void)
{
	char q = '0';

	while (q <= '9')
	{
		putchar(q);
		q++;
	}

	char b = 'a';

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
