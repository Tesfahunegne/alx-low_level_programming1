#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Description: print base 10 and  a to f
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
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
